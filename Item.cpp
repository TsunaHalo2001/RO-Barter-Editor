//
// Created by tsuna on 4/03/25.
//

#include "Item.h"

Item::Item(const int index, std::string item) : index(index), item(std::move(item)), cost(std::move(cost)) {
}

Item::~Item() = default;

int Item::getIndex() const {
    return this->index;
}

std::string Item::getItem() {
    return this->item;
}

std::vector<Cost> Item::getCost() {
    return this->cost;
}

void Item::setIndex(const int pIndex) {
    this->index = pIndex;
}

void Item::setItem(const std::string &pItem) {
    this->item = pItem;
}

void Item::setCost(const std::vector<Cost> &pCost) {
    this->cost = pCost;
}

void Item::addCost(const Cost &pCost) {
    this->cost.emplace_back(pCost);
}