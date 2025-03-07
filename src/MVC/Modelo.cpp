//
// Created by tsuna on 6/03/25.
//

#include "Modelo.h"

Modelo::Modelo() : shop(Shop()), db(std::move(db)) {
    this->state = 0;
    this->warningFlag = 0;

    for (std::string path[] = {DBEQUIP, DBUSABLE, DBETC}; const auto &i : path) this->db.emplace_back(i);
}

Modelo::~Modelo() = default;

Shop &Modelo::getShop() {
    return this->shop;
}

std::vector<Database> &Modelo::getDatabase() {
    return this->db;
}

int Modelo::getState() const {
    return this->state;
}

int Modelo::getWarningFlag() const {
    return this->warningFlag;
}

void Modelo::setShop(const Shop &pShop) {
    this->shop = pShop;
}

void Modelo::setDatabase(const char *pDatabase) {
    this->db.emplace_back(pDatabase);
}

void Modelo::setState(const int pState) {
    this->state = pState;
}

void Modelo::setWarningFlag(const int pWarningFlag) {
    this->warningFlag = pWarningFlag;
}

void Modelo::addCategory(const Category &pCategory) {
    this->shop.addCategory(pCategory);
    this->state = 2;
    this->warningFlag = 1;
}

bool Modelo::isCategoryOnShop(const std::string& pCategory) {
    return this->shop.isCategoryOnShop(pCategory);
}