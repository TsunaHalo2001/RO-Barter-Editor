//
// Created by tsuna on 5/03/25.
//

#include "Database.h"

#include <utility>

Database::Database(std::string path) : path(std::move(path)) {
    std::ifstream file(path);

    if (!file.is_open()) std::cout << "File not found" << std::endl;

    else {
        int itemid;
        std::string itemaname;
        std::string itemname;
        std::string itemtype;
        int itemweight;

        std::string line;

        while (getline(file, line)) {
            std::stringstream token(line);

            getline(token, itemname, ':');

            if (line == "  - Id") token >> itemid;
            else if (line == "    AName") token >> itemaname;
            else if (line == "    Name") token >> itemname;
            else if (line == "    Type") token >> itemtype;
            else if (line == "    Weight") token >> itemweight;
        }
    }
}

Database::~Database() = default;

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