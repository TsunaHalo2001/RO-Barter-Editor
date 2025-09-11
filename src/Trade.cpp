//
// Created by tsuna on 9/10/25.
//

#include "Trade.h"

#include "../config.h"

Trade::Trade(const int override,
             const bool noDrop = BOOLDEFAULT,
             const bool noTrade = BOOLDEFAULT,
             const bool tradePartner = BOOLDEFAULT,
             const bool noSell = BOOLDEFAULT,
             const bool noCart = BOOLDEFAULT,
             const bool noStorage = BOOLDEFAULT,
             const bool noGuildStorage = BOOLDEFAULT,
             const bool noMail = BOOLDEFAULT,
             const bool noAuction = BOOLDEFAULT) :
                override(override),
                noDrop(noDrop),
                noTrade(noTrade),
                tradePartner(tradePartner),
                noSell(noSell),
                noCart(noCart),
                noStorage(noStorage),
                noGuildStorage(noGuildStorage),
                noMail(noMail),
                noAuction(noAuction) {}

Trade::Trade() : override(OVERRIDEDEFAULT),
                 noDrop(BOOLDEFAULT),
                 noTrade(BOOLDEFAULT),
                 tradePartner(BOOLDEFAULT),
                 noSell(BOOLDEFAULT),
                 noCart(BOOLDEFAULT),
                 noStorage(BOOLDEFAULT),
                 noGuildStorage(BOOLDEFAULT),
                 noMail(BOOLDEFAULT),
                 noAuction(BOOLDEFAULT) {}

Trade::~Trade() = default;

[[nodiscard]] int Trade::getOverride() const { return this->override; }
[[nodiscard]] bool Trade::getNoDrop() const { return this->noDrop; }
[[nodiscard]] bool Trade::getNoTrade() const { return this->noTrade; }
[[nodiscard]] bool Trade::getTradePartner() const { return this->tradePartner; }
[[nodiscard]] bool Trade::getNoSell() const { return this->noSell; }
[[nodiscard]] bool Trade::getNoCart() const { return this->noCart; }
[[nodiscard]] bool Trade::getNoStorage() const { return this->noStorage; }
[[nodiscard]] bool Trade::getNoGuildStorage() const { return this->noGuildStorage; }
[[nodiscard]] bool Trade::getNoMail() const { return this->noMail; }
[[nodiscard]] bool Trade::getNoAuction() const { return this->noAuction; }

void Trade::setOverride(const int override_) { this->override = override_; }
void Trade::setNoDrop(const bool no_drop) { this->noDrop = no_drop; }
void Trade::setNoTrade(const bool no_trade) { this->noTrade = no_trade; }
void Trade::setTradePartner(const bool no_trade_partner) { this->tradePartner = no_trade_partner; }
void Trade::setNoSell(const bool no_sell) { this->noSell = no_sell; }
void Trade::setNoCart(const bool no_cart) { this->noCart = no_cart; }
void Trade::setNoStorage(const bool no_storage) { this->noStorage = no_storage; }
void Trade::setNoGuildStorage(const bool no_guild_storage) { this->noGuildStorage = no_guild_storage; }
void Trade::setNoMail(const bool no_mail) { this->noMail = no_mail; }
void Trade::setNoAuction(const bool no_auction) { this->noAuction = no_auction; }