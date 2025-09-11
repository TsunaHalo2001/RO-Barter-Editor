//
// Created by tsuna on 4/03/25.
//

#include "Category.h"

Category::Category(std::string name) : name(std::move(name)), item(std::move(item)) {}

Category::~Category() = default;

[[nodiscard]] std::string Category::getName() const { return this->name; }
[[nodiscard]] std::vector<Item> Category::getItem() const { return this->item; }

void Category::setName(const std::string &pName) { this->name = pName; }
void Category::setItem(const std::vector<Item> &pItem) { this->item = pItem; }

void Category::addItem(const Item &pItem) { this->item.emplace_back(pItem); }