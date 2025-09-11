//
// Created by tsuna on 9/9/25.
//

#include "Stack.h"

Stack::Stack(
    const bool inventory,
    const bool cart = BOOLDEFAULT,
    const bool storage = BOOLDEFAULT,
    const bool guildStorage = BOOLDEFAULT) :
        inventory(inventory),
        cart(cart),
        storage(storage),
        guildStorage(guildStorage) {}

Stack::Stack() : inventory(INVENTORYDEFAULT),
                 cart(BOOLDEFAULT),
                 storage(BOOLDEFAULT),
                 guildStorage(BOOLDEFAULT) {}

Stack::~Stack() = default;

[[nodiscard]] bool Stack::getInventory() const { return this->inventory; }
[[nodiscard]] bool Stack::getCart() const { return this->cart; }
[[nodiscard]] bool Stack::getStorage() const { return this->storage; }
[[nodiscard]] bool Stack::getGuildStorage() const { return this->guildStorage; }

void Stack::setInventory(const bool inventory_) { this->inventory = inventory_; }
void Stack::setCart(const bool cart_) { this->cart = cart_; }
void Stack::setStorage(const bool storage_) { this->storage = storage_; }
void Stack::setGuildStorage(const bool guild_storage) { this->guildStorage = guild_storage; }