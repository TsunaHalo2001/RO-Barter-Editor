//
// Created by tsuna on 9/9/25.
//

#ifndef RO_BARTER_EDITOR_STACK_H
#define RO_BARTER_EDITOR_STACK_H

#include "../config.h"

class Stack {
    protected:
        bool inventory;
        bool cart;
        bool storage;
        bool guildStorage;

    public:
        Stack(bool, bool, bool, bool);
        Stack();
        ~Stack();

        bool getInventory() const;
        bool getCart() const;
        bool getStorage() const;
        bool getGuildStorage() const;

        void setInventory(bool);
        void setCart(bool);
        void setStorage(bool);
        void setGuildStorage(bool);
};


#endif //RO_BARTER_EDITOR_STACK_H