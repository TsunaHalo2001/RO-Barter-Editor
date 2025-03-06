//
// Created by tsuna on 4/03/25.
//

#include "Shop.h"

Shop::Shop() : path(SHOP) {
    std::ifstream file(path, std::ios::in);

    if (!file.is_open()) {
        std::ofstream templat(path, std::ios::out);
        templat << "Header:" << std::endl;
        templat << "  Type: BARTER_DB" << std::endl;
        templat << "  Version: 1" << std::endl << std::endl;
        templat << "Body:" << std::endl;
        templat << "  - Name: shop01" << std::endl;
        templat << "    Items:" << std::endl;
        templat << "      - Index: 0" << std::endl;
        templat << "        Item: Elunium_Box" << std::endl;
        templat << "        RequiredItems:" << std::endl;
        templat << "          - Index: 0" << std::endl;
        templat << "            Item: Elunium" << std::endl;
        templat << "            Amount: 1" << std::endl;
        templat.close();

        file.open(path, std::ios::in);
    }

    int categoryIndex;
    std::string categoryName;
    int itemIndex;
    std::string itemName;
    int costIndex;
    std::string costName;
    int costAmount;

    std::string line;

    while(getline(file, line)) {
        std::stringstream token(line);

        getline(token, line, ':');

        if (line == "  Type") token >> this->type;
        else if (line == "  Version") token >> this->version;
        else if (line == "  - Name") {
            token >> categoryName;
            category.emplace_back(line);
            categoryIndex = category.size() - 1;
        }
        else if (line == "      - Index") token >> itemIndex;
        else if (line == "        Item") {
            token >> itemName;
            category[categoryIndex].addItem(Item(itemIndex, itemName));
        }
        else if (line == "          - Index") token >> costIndex;
        else if (line == "            Item") token >> costName;
        else if (line == "            Amount") {
            token >> costAmount;
            category[categoryIndex].getItem()[itemIndex].addCost(Cost(costIndex, costName, costAmount));
        }
    }

    file.close();
}

Shop::~Shop() = default;

std::string Shop::getPath() {
    return this->path;
}

std::string Shop::getType() {
    return this->type;
}

std::string Shop::getVersion() {
    return this->version;
}

std::vector<Category> Shop::getCategory() {
    return this->category;
}

void Shop::setPath(const std::string &pPath) {
    this->path = pPath;
}

void Shop::setType(const std::string &pType) {
    this->type = pType;
}

void Shop::setVersion(const std::string &pVersion) {
    this->version = pVersion;
}

void Shop::setCategory(const std::vector<Category> &pCategory) {
    this->category = pCategory;
}

void Shop::addCategory(const Category& pCategory) {
    this->category.emplace_back(pCategory);
}

void Shop::dbValues() {
    std::cout << "Path: " << path << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Version: " << version << std::endl;

    std::cout << "Categories: " << category.size() << std::endl;
    int inventory = 0;
    for (auto &cat : category) {
        inventory += cat.getItem().size();
    }
    std::cout << "Inventory: " << inventory << std::endl;
}
