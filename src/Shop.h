//
// Created by tsuna on 4/03/25.
//

#ifndef RO_BARTER_EDITOR_SHOP_H
#define RO_BARTER_EDITOR_SHOP_H

#include "../config.h"
#include "Category.h"

class Shop {
    protected:
        std::string path;
        std::string type;
        std::string version;
        std::vector<Category> category;

    public:
        Shop();
        ~Shop();

        void loadShop();

        std::string getPath() const;
        std::string getType() const;
        std::string getVersion() const;
        std::vector<Category> getCategory() const;

        void setPath(const std::string &);
        void setType(const std::string &);
        void setVersion(const std::string &);
        void setCategory(const std::vector<Category> &);

        void addCategory(const Category&);

        bool isCategoryOnShop(const std::string&);
        bool isItemOnShop(Item &);

        void shopValues();
};



#endif //RO_BARTER_EDITOR_SHOP_H
