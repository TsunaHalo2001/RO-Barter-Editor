//
// Created by tsuna on 9/9/25.
//

#include "NoUse.h"

#include "../config.h"

NoUse::NoUse(const int override,
             const bool sitting = BOOLDEFAULT) : override(override), sitting(sitting) {}
NoUse::NoUse() : override(OVERRIDEDEFAULT), sitting(BOOLDEFAULT) {}

NoUse::~NoUse() = default;

[[nodiscard]] int NoUse::getOverride() const { return this->override; }
[[nodiscard]] bool NoUse::getSitting() const { return this->sitting; }

void NoUse::setOverride(const int override_) { this->override = override_; }
void NoUse::setSitting(const bool sitting_) { this->sitting = sitting_; }