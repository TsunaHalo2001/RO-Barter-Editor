//
// Created by tsuna on 9/11/25.
//

#ifndef RO_BARTER_EDITOR_CONFIG_H
#define RO_BARTER_EDITOR_CONFIG_H

#include "../config.h"

class Config {
    protected:
        std::string type;
        int version;
        bool loaded;

        std::vector<std::string> dbPath;

    public:
        Config();
        ~Config();

        std::string getType() const;
        int getVersion() const;
        std::vector<std::string> getDbPath() const;
        bool isLoaded() const;

        void setType(const std::string&);
        void setVersion(int);
        void setDbPath(const std::vector<std::string>&);
        void setLoaded(bool);

        void addDBPath(const std::string&);

        void loadConfig();
        void createConfig();
};


#endif //RO_BARTER_EDITOR_CONFIG_H