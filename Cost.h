//
// Created by tsuna on 4/03/25.
//

#ifndef COST_H
#define COST_H

#include "config.h"

class Cost {
    protected:
        int index;
        std::string item;
        int amount;

    public:
        Cost(int, std::string, int);
        ~Cost();

        [[nodiscard]] int getIndex() const;
        std::string getItem();
        [[nodiscard]] int getAmount() const;

        void setIndex(int);
        void setItem(const std::string &);
        void setAmount(int);
};

#endif //COST_H
