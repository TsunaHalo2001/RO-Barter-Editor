//
// Created by tsuna on 4/03/25.
//

#ifndef DATABASE_H
#define DATABASE_H

#include "config.h"
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

        std::string getPath();
        std::string getType();
        std::string getVersion();
        std::vector<Category> getCategory();

        void setPath(const std::string &);
        void setType(const std::string &);
        void setVersion(const std::string &);
        void setCategory(const std::vector<Category> &);

        void addCategory(const Category&);

        void dbValues();
};



#endif //DATABASE_H
