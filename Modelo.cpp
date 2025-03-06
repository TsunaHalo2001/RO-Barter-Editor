//
// Created by tsuna on 6/03/25.
//

#include "Modelo.h"

Modelo::Modelo() : shop(Shop()), db(std::move(db)) {
    this->state = 0;

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

void Modelo::setShop(const Shop &pShop) {
    this->shop = pShop;
}

void Modelo::setDatabase(const char *pDatabase) {
    this->db.emplace_back(pDatabase);
}

void Modelo::setState(const int pState) {
    this->state = pState;
}