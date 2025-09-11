//
// Created by tsuna on 9/9/25.
//

#include "Flag.h"

#include <functional>
#include <utility>

Flag::Flag(const bool buyingStore,
           const bool deadBranch = BOOLDEFAULT,
           const bool container = BOOLDEFAULT,
           const bool uniqueId = BOOLDEFAULT,
           const bool bindOnEquip = BOOLDEFAULT,
           const bool dropAnnounce = BOOLDEFAULT,
           const bool noConsume = BOOLDEFAULT,
           std::string dropEffect = STRNONE) :
               buyingStore(buyingStore),
               deadBranch(deadBranch),
               container(container),
               uniqueId(uniqueId),
               bindOnEquip(bindOnEquip),
               dropAnnounce(dropAnnounce),
               noConsume(noConsume),
               dropEffect(std::move(dropEffect)) {}
Flag::Flag() :
    buyingStore(BOOLDEFAULT),
    deadBranch(BOOLDEFAULT),
    container(BOOLDEFAULT),
    uniqueId(BOOLDEFAULT),
    bindOnEquip(BOOLDEFAULT),
    dropAnnounce(BOOLDEFAULT),
    noConsume(BOOLDEFAULT),
    dropEffect(STRNONE) {}

Flag::~Flag() = default;

[[nodiscard]] bool Flag::getBuyingStore() const { return this->buyingStore; }
[[nodiscard]] bool Flag::getDeadBranch() const { return this->deadBranch; }
[[nodiscard]] bool Flag::getContainer() const { return this->container; }
[[nodiscard]] bool Flag::getUniqueId() const { return this->uniqueId; }
[[nodiscard]] bool Flag::getBindOnEquip() const { return this->bindOnEquip; }
[[nodiscard]] bool Flag::getDropAnnounce() const { return this->dropAnnounce; }
[[nodiscard]] bool Flag::getNoConsume() const { return this->noConsume; }
[[nodiscard]] std::string Flag::getDropEffect() const { return this->dropEffect; }

void Flag::setBuyingStore(const bool buying_store) { this->buyingStore = buying_store; }
void Flag::setDeadBranch(const bool dead_branch) { this->deadBranch = dead_branch; }
void Flag::setContainer(const bool container_) { this->container = container_; }
void Flag::setUniqueId(const bool unique_id) { this->uniqueId = unique_id; }
void Flag::setBindOnEquip(const bool bind_on_equip) { this->bindOnEquip = bind_on_equip; }
void Flag::setDropAnnounce(const bool drop_announce) { dropAnnounce = drop_announce; }
void Flag::setNoConsume(const bool no_consume) { this->noConsume = no_consume; }
void Flag::setDropEffect(const std::string& drop_effect) { this->dropEffect = drop_effect; }