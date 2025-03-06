//
// Created by tsuna on 5/03/25.
//

#ifndef ITEMDB_H
#define ITEMDB_H

#include "config.h"

class ItemDB {
    protected:
        int id;
        std::string aName;
        std::string name;
        std::string type;
        int weight;
    public:
        ItemDB(int, std::string , std::string , std::string , int);
        ~ItemDB();

        int getId() const;
        std::string getAName();
        std::string getName();
        std::string getType();
        int getWeight() const;

        void setId(int);
        void setAName(std::string);
        void setName(std::string);
        void setType(const std::string &);
        void setWeight(int);
};

#endif //ITEMDB_H
