//
// Created by tsuna on 4/03/25.
//

#include "Cost.h"

Cost::Cost(const int index,
           std::string item,
           const int amount) : index(index),
                               item(std::move(item)),
                               amount(amount) {
}

Cost::~Cost() = default;

int Cost::getIndex() const {
    return this->index;
}

std::string Cost::getItem() {
    return this->item;
}

int Cost::getAmount() const {
    return this->amount;
}

void Cost::setIndex(const int pIndex) {
    this->index = pIndex;
}

void Cost::setItem(const std::string &pItem) {
    this->item = pItem;
}

void Cost::setAmount(const int pAmount) {
    this->amount = pAmount;
}