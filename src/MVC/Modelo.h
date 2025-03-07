//
// Created by tsuna on 6/03/25.
//

#ifndef MODELO_H
#define MODELO_H

#include "../../config.h"
#include "../Shop.h"
#include "../Database.h"

class Modelo {
    protected:
        Shop shop;
        std::vector<Database> db;

        int state;
        int warningFlag;

    public:
        Modelo();
        ~Modelo();

        Shop &getShop();
        std::vector<Database> &getDatabase();
        [[nodiscard]] int getState() const;
        int getWarningFlag() const;

        void setShop(const Shop &);
        void setDatabase(const char *);
        void setState(int);
        void setWarningFlag(int);

        void addCategory(const Category &);

        bool isCategoryOnShop(const std::string&);
};



#endif //MODELO_H
