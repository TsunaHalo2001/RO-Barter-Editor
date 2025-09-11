//
// Created by tsuna on 4/03/25.
//

#ifndef RO_BARTER_EDITOR_CATEGORY_H
#define RO_BARTER_EDITOR_CATEGORY_H

#include "../config.h"
#include "Item.h"

class Category {
    protected:
        std::string name;
        std::vector<Item> item;

    public:
        explicit Category(std::string);
        ~Category();

        std::string getName() const;
        std::vector<Item> getItem() const;

        void setName(const std::string &);
        void setItem(const std::vector<Item> &);

        void addItem(const Item &);
};



#endif //RO_BARTER_EDITOR_CATEGORY_H
