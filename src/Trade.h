//
// Created by tsuna on 9/10/25.
//

#ifndef RO_BARTER_EDITOR_TRADE_H
#define RO_BARTER_EDITOR_TRADE_H


class Trade{
    protected:
        int override;
        bool noDrop;
        bool noTrade;
        bool tradePartner;
        bool noSell;
        bool noCart;
        bool noStorage;
        bool noGuildStorage;
        bool noMail;
        bool noAuction;
    public:
        Trade(int, bool, bool, bool, bool, bool, bool, bool, bool, bool);
        Trade();
        ~Trade();

        int getOverride() const;
        bool getNoDrop() const;
        bool getNoTrade() const;
        bool getTradePartner() const;
        bool getNoSell() const;
        bool getNoCart() const;
        bool getNoStorage() const;
        bool getNoGuildStorage() const;
        bool getNoMail() const;
        bool getNoAuction() const;

        void setOverride(int);
        void setNoDrop(bool);
        void setNoTrade(bool);
        void setTradePartner(bool);
        void setNoSell(bool);
        void setNoCart(bool);
        void setNoStorage(bool);
        void setNoGuildStorage(bool);
        void setNoMail(bool);
        void setNoAuction(bool);
};


#endif //RO_BARTER_EDITOR_TRADE_H