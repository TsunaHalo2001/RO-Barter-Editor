//
// Created by tsuna on 5/03/25.
//

#ifndef DATABASE_H
#define DATABASE_H

#include "../config.h"
#include "ItemDB.h"

class Database {
    protected:
        std::string path;
        std::string type;
        std::string version;

        std::vector<ItemDB> item;

    public:
        explicit Database(std::string);
        ~Database();

        void loadDB();

        std::string getPath();
        std::string getType();
        std::string getVersion();
        std::vector<ItemDB> getItem();

        void setPath(const std::string &);
        void setType(const std::string &);
        void setVersion(const std::string &);
        void setItem(const std::vector<ItemDB> &);

        bool isItemOnDB(ItemDB &);

        void dbValues() const;
};



#endif //DATABASE_H
