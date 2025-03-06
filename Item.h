//
// Created by tsuna on 4/03/25.
//

#ifndef ITEM_H
#define ITEM_H

#include "config.h"
#include "Cost.h"

class Item {
    protected:
        int index;
        std::string item;
        std::vector<Cost> cost;

    public:
        Item(int, std::string);
        ~Item();

        [[nodiscard]] int getIndex() const;
        std::string getItem();
        std::vector<Cost> getCost();

        void setIndex(int);
        void setItem(const std::string &);
        void setCost(const std::vector<Cost> &);

        void addCost(const Cost &);
};



#endif //ITEM_H
