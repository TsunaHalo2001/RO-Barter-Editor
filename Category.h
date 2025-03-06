//
// Created by tsuna on 4/03/25.
//

#ifndef CATEGORY_H
#define CATEGORY_H

#include "config.h"
#include "Item.h"

class Category {
    protected:
        std::string name;
        std::vector<Item> item;

    public:
        explicit Category(std::string);
        ~Category();

        std::string getName();
        std::vector<Item> getItem();

        void setName(const std::string &);
        void setItem(const std::vector<Item> &);

        void addItem(const Item &);
};



#endif //CATEGORY_H
