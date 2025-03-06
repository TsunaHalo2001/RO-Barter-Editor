//
// Created by tsuna on 5/03/25.
//

#include "Database.h"

Database::Database(std::string path) : path(std::move(path)) {
    loadDB();
}

Database::~Database() = default;

void Database::loadDB() {
    std::ifstream file(this->path, std::ios::in);

    if (!file.is_open()) {
        std::cout << "File not found" << std::endl;
        return;
    }

    int itemId = INTNULL;
    std::string itemAName = STRNULL;
    std::string itemName = STRNULL;
    std::string itemType = TYPEDEFAULT;
    int itemWeight = WEIGHTDEFAULT;

    std::string line;

    while (getline(file, line)) {
        std::stringstream token(line);

        getline(token, line, ':');

        if (line == "  Type") token >> this->type;
        else if (line == "  Version") token >> this->version;
        else if (line == "  - Id") token >> itemId;
        else if (line == "    AegisName") token >> itemAName;
        else if (line == "    Name") token >> itemName;
        else if (line == "    Type") token >> itemType;
        else if (line == "    Weight") {
            token >> itemWeight;
            if (itemId != INTNULL && itemAName != STRNULL && itemName != STRNULL && itemType != STRNULL && itemWeight != INTNULL) this->item.emplace_back(itemId, itemAName, itemName, itemType, itemWeight);
            else std::cout << "Error: Item not properly designated" << std::endl;

            itemId = INTNULL;
            itemAName = STRNULL;
            itemName = STRNULL;
            itemType = TYPEDEFAULT;
            itemWeight = WEIGHTDEFAULT;
        }
    }

    file.close();
}

std::string Database::getPath() {
    return this->path;
}

std::string Database::getType() {
    return this->type;
}

std::string Database::getVersion() {
    return this->version;
}

std::vector<ItemDB> Database::getItem() {
    return this->item;
}

void Database::setPath(const std::string &pPath) {
    this->path = pPath;
}

void Database::setType(const std::string &pType) {
    this->type = pType;
}

void Database::setVersion(const std::string &pVersion) {
    this->version = pVersion;
}

void Database::setItem(const std::vector<ItemDB> &pItem) {
    this->item = pItem;
}

// ReSharper disable once CppMemberFunctionMayBeConst
bool Database::isItemOnDB(ItemDB &pItem) {
    for (auto &i : this->item) if (i.getId() == pItem.getId() && i.getAName() == pItem.getAName() && i.getName() == pItem.getName() && i.getType() == pItem.getType() && i.getWeight() == pItem.getWeight()) return true;

    return false;
}

void Database::dbValues() const {
    std::cout << "Path: " << this->path << std::endl;
    std::cout << "Type: " << this->type << std::endl;
    std::cout << "Version: " << this->version << std::endl;

    std::cout << "Items: " << this->item.size() << std::endl;
}
