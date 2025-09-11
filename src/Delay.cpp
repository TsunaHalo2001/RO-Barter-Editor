//
// Created by tsuna on 9/9/25.
//

#include "Delay.h"

#include <utility>

Delay::Delay(const int duration,
             std::string status = STRNONE) : duration(duration), status(std::move(status)){}
Delay::Delay() : duration(INTNULL), status(STRNONE) {}

Delay::~Delay() = default;

[[nodiscard]] int Delay::getDuration() const { return this->duration; }
[[nodiscard]] std::string Delay::getStatus() const { return this->status; }

void Delay::setDuration(const int duration_) { this->duration = duration_; }
void Delay::setStatus(const std::string& status_) { this->status = status_; }