//
// Created by tsuna on 4/03/25.
//

#ifndef RO_BARTER_EDITOR_ITEM_H
#define RO_BARTER_EDITOR_ITEM_H

#include "../config.h"
#include "Cost.h"

class Item {
    protected:
        int index;
        std::string item;
        std::vector<Cost> cost;

    public:
        Item(int, std::string);
        ~Item();

        int getIndex() const;
        std::string getItem() const;
        std::vector<Cost> getCost() const;

        void setIndex(const int);
        void setItem(const std::string &);
        void setCost(const std::vector<Cost> &);

        void addCost(const Cost &);
};



#endif //RO_BARTER_EDITOR_ITEM_H
