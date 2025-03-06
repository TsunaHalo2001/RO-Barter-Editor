//
// Created by tsuna on 5/03/25.
//

#include "ItemDB.h"

ItemDB::ItemDB(const int id, std::string  aName, std::string  name, std::string  type, const int weight) : id(id), aName(std::move(aName)), name(std::move(name)), type(std::move(type)), weight(weight) {
}

ItemDB::~ItemDB() = default;

int ItemDB::getId() const {
    return this->id;
}

std::string ItemDB::getAName() {
    return this->aName;
}

std::string ItemDB::getName() {
    return this->name;
}

std::string ItemDB::getType() {
    return this->type;
}

int ItemDB::getWeight() const {
    return this->weight;
}

void ItemDB::setId(const int pId) {
    this->id = pId;
}

void ItemDB::setAName(std::string pAName) {
    this->aName = std::move(pAName);
}

void ItemDB::setName(std::string pName) {
    this->name = std::move(pName);
}

void ItemDB::setType(const std::string &pType) {
    this->type = pType;
}

void ItemDB::setWeight(const int pWeight) {
    this->weight = pWeight;
}
