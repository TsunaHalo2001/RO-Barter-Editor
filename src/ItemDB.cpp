//
// Created by tsuna on 5/03/25.
//

#include "ItemDB.h"

#include <utility>

ItemDB::ItemDB(const int id,
               std::string aegisName,
               std::string name,
               std::string type = TYPEDEFAULT,
               std::string subType = SUBTYPEDEFAULT,
               const int buy = INTDEFAULT,
               const int sell = INTDEFAULT,
               const int weight = INTDEFAULT,
               const int attack = INTDEFAULT,
               const int magicAttack = INTDEFAULT,
               const int defense = INTDEFAULT,
               const int range = INTDEFAULT,
               const int slots = INTDEFAULT,
               const int weaponLevel = INTDEFAULT,
               const int armorLevel = INTDEFAULT,
               const int equipLevelMin = INTDEFAULT,
               const int equipLevelMax = INTDEFAULT,
               const bool refineable = BOOLDEFAULT,
               const bool gradeable = BOOLDEFAULT,
               const int view = INTDEFAULT,
               Flag flags = Flag(),
               Delay delay = Delay(),
               Stack stack = Stack(),
               NoUse noUse = NoUse(),
               std::string script = STRNULL,
               std::string equipScript = STRNULL,
               std::string unEquipScript = STRNULL) :
                    id(id),
                    aegisName(std::move(aegisName)),
                    name(std::move(name)),
                    type(std::move(type)),
                    subType(std::move(subType)),
                    buy(buy),
                    sell(sell),
                    weight(weight),
                    attack(attack),
                    magicAttack(magicAttack),
                    defense(defense),
                    range(range),
                    slots(slots),
                    weaponLevel(weaponLevel),
                    armorLevel(armorLevel),
                    equipLevelMin(equipLevelMin),
                    equipLevelMax(equipLevelMax),
                    refineable(refineable),
                    gradeable(gradeable),
                    view(view),
                    flags(flags),
                    delay(delay),
                    stack(stack),
                    noUse(noUse),
                    script(std::move(script)),
                    equipScript(std::move(equipScript)),
                    unEquipScript(std::move(unEquipScript)) {}

ItemDB::~ItemDB() = default;

[[nodiscard]] int ItemDB::getId() const { return this->id; }
[[nodiscard]] std::string ItemDB::getAegisName() const { return this->aegisName; }
[[nodiscard]] std::string ItemDB::getName() const { return this->name; }
[[nodiscard]] std::string ItemDB::getType() const { return this->type; }
[[nodiscard]] std::string ItemDB::getSubType() const { return this->subType; }
[[nodiscard]] int ItemDB::getBuy() const { return this->buy; }
[[nodiscard]] int ItemDB::getSell() const { return this->sell; }
[[nodiscard]] int ItemDB::getWeight() const { return this->weight; }
[[nodiscard]] int ItemDB::getAttack() const { return this->attack; }
[[nodiscard]] int ItemDB::getMagicAttack() const { return this-> magicAttack; }
[[nodiscard]] int ItemDB::getDefense() const { return this->defense; }
[[nodiscard]] int ItemDB::getRange() const { return this->range; }
[[nodiscard]] int ItemDB::getSlots() const { return this->slots; }
[[nodiscard]] int ItemDB::getWeaponLevel() const { return this->weaponLevel; }
[[nodiscard]] int ItemDB::getArmorLevel() const { return this->armorLevel; }
[[nodiscard]] int ItemDB::getEquipLevelMin() const { return this->equipLevelMin; }
[[nodiscard]] int ItemDB::getEquipLevelMax() const { return this->equipLevelMax; }
[[nodiscard]] bool ItemDB::getRefineable() const { return this->refineable; }
[[nodiscard]] bool ItemDB::getGradeable() const { return this->gradeable; }
[[nodiscard]] int ItemDB::getView() const { return this->view; }
[[nodiscard]] Flag ItemDB::getFlag() const { return this->flags; }
[[nodiscard]] Delay ItemDB::getDelay() const { return this->delay; }
[[nodiscard]] Stack ItemDB::getStack() const { return this->stack; }
[[nodiscard]] NoUse ItemDB::getNoUse() const { return this->noUse; }
[[nodiscard]] std::string ItemDB::getScript() const { return this->script; }
[[nodiscard]] std::string ItemDB::getEquipScript() const { return this->equipScript; }
[[nodiscard]] std::string ItemDB::getUnEquipScript() const { return this->unEquipScript; }

void ItemDB::setId(const int id_) { this->id = id_; }
void ItemDB::setAegisName(const std::string& aegis_name) { this->aegisName = aegis_name; }
void ItemDB::setName(const std::string& name_) { this->name = name_; }
void ItemDB::setType(const std::string& type_) { this->type = type_; }
void ItemDB::setSubType(const std::string& sub_type) { this->subType = sub_type; }
void ItemDB::setBuy(const int buy_) { this->buy = buy_; }
void ItemDB::setSell(const int sell_) { this->sell = sell_; }
void ItemDB::setWeight(const int weight_) { this->weight = weight_; }
void ItemDB::setAttack(const int attack_) { this->attack = attack_; }
void ItemDB::setMagicAttack(const int magic_attack) { this->magicAttack = magic_attack; }
void ItemDB::setDefense(const int defense_) { this->defense = defense_; }
void ItemDB::setRange(const int range_) { this->range = range_; }
void ItemDB::setSlots(const int slots_) { this->slots = slots_; }
void ItemDB::setWeaponLevel(const int weapon_level) { this->weaponLevel = weapon_level; }
void ItemDB::setArmorLevel(const int armor_level) { this->armorLevel = armor_level; }
void ItemDB::setEquipLevelMin(const int equip_level_min) { this->equipLevelMin = equip_level_min; }
void ItemDB::setEquipLevelMax(const int equip_level_max) { this->equipLevelMax = equip_level_max; }
void ItemDB::setRefineable(const bool refineable_) { this->refineable = refineable_; }
void ItemDB::setGradeable(const bool gradeable_) { this->gradeable = gradeable_; }
void ItemDB::setView(const int view_) { this->view = view_; }
void ItemDB::setFlags(const Flag& flags_) { this->flags = flags_; }
void ItemDB::setDelay(const Delay& delay_) { this->delay = delay_; }
void ItemDB::setStack(const Stack& stack_) { this->stack = stack_; }
void ItemDB::setNoUse(const NoUse& no_use) { this->noUse = no_use; }
void ItemDB::setScript(const std::string& script_) { this->script = script_; }
void ItemDB::setEquipScript(const std::string& equip_script) { this->equipScript = equip_script; }
void ItemDB::setUnEquipScript(const std::string& un_equip_script) { this->unEquipScript = un_equip_script; }