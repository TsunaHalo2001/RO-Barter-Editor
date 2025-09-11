//
// Created by tsuna on 4/03/25.
//

#ifndef RO_BARTER_EDITOR_COST_H
#define RO_BARTER_EDITOR_COST_H

#include "../config.h"

class Cost {
    protected:
        int index;
        std::string item;
        int amount;

    public:
        Cost(int, std::string, int);
        ~Cost();

        int getIndex() const;
        std::string getItem() const;
        int getAmount() const;

        void setIndex(const int);
        void setItem(const std::string &);
        void setAmount(const int);
};

#endif //RO_BARTER_EDITOR_COST_H
