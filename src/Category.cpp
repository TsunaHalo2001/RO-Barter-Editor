//
// Created by tsuna on 4/03/25.
//

#include "Category.h"

Category::Category(std::string name) : name(std::move(name)), item(std::move(item)) {
}

Category::~Category() = default;

std::string Category::getName() {
    return this->name;
}

std::vector<Item> Category::getItem() {
    return this->item;
}

void Category::setName(const std::string &pName) {
    this->name = pName;
}

void Category::setItem(const std::vector<Item> &pItem) {
    this->item = pItem;
}



void Category::addItem(const Item &pItem) {
    this->item.emplace_back(pItem);
}