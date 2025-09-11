//
// Created by tsuna on 4/03/25.
//

#include "Shop.h"

Shop::Shop() : path(SHOP) {
    loadShop();
}

Shop::~Shop() = default;

void Shop::loadShop() {
    std::ifstream file(this->path, std::ios::in);

    if (!file.is_open()) {
        std::ofstream templat(this->path, std::ios::out);
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

        file.open(this->path, std::ios::in);
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
            this->category.emplace_back(line);
            categoryIndex = this->category.size() - 1;
        }
        else if (line == "      - Index") token >> itemIndex;
        else if (line == "        Item") {
            token >> itemName;
            this->category[categoryIndex].addItem(Item(itemIndex, itemName));
        }
        else if (line == "          - Index") token >> costIndex;
        else if (line == "            Item") token >> costName;
        else if (line == "            Amount") {
            token >> costAmount;
            this->category[categoryIndex].getItem()[itemIndex].addCost(Cost(costIndex, costName, costAmount));
        }
    }

    file.close();
}

[[nodiscard]] std::string Shop::getPath() const { return this->path; }
[[nodiscard]] std::string Shop::getType() const { return this->type; }
[[nodiscard]] std::string Shop::getVersion() const { return this->version; }
[[nodiscard]] std::vector<Category> Shop::getCategory() const { return this->category; }

void Shop::setPath(const std::string &pPath) { this->path = pPath; }
void Shop::setType(const std::string &pType) { this->type = pType; }
void Shop::setVersion(const std::string &pVersion) { this->version = pVersion; }
void Shop::setCategory(const std::vector<Category> &pCategory) { this->category = pCategory; }

void Shop::addCategory(const Category& pCategory) {
    this->category.emplace_back(pCategory);
}

bool Shop::isCategoryOnShop(const std::string& pCategory) {
    for (auto &cat : this->category) if (cat.getName() == pCategory) return true;

    return false;
}

bool Shop::isItemOnShop(Item &pItem) {
    for (auto &cat : this->category) for (auto &item : cat.getItem()) if (item.getItem() == pItem.getItem()) return true;

    return false;
}

void Shop::shopValues() {
    std::cout << "Path: " << this->path << std::endl;
    std::cout << "Type: " << this->type << std::endl;
    std::cout << "Version: " << this->version << std::endl;

    std::cout << "Categories: " << this->category.size() << std::endl;
    int inventory = 0;
    for (auto &cat : this->category) inventory += cat.getItem().size();
    std::cout << "Inventory: " << inventory << std::endl;
}
