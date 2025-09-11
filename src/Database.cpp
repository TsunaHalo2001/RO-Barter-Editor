//
// Created by tsuna on 5/03/25.
//

#include "Database.h"

Database::Database(std::string path) : path(std::move(path)) {
    loadDB();
}

Database::~Database() = default;

void Database::loadDB() {
    try {

    }
}

[[nodiscard]] std::string Database::getPath() const { return this->path; }
[[nodiscard]] std::string Database::getType() const { return this->type; }
[[nodiscard]] std::string Database::getVersion() const { return this->version; }
[[nodiscard]] std::vector<ItemDB> Database::getItem() const { return this->item; }

void Database::setPath(const std::string &pPath) { this->path = pPath; }
void Database::setType(const std::string &pType) { this->type = pType; }
void Database::setVersion(const std::string &pVersion) { this->version = pVersion; }
void Database::setItem(const std::vector<ItemDB> &pItem) { this->item = pItem; }

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
