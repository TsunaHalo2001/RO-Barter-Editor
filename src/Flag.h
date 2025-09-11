//
// Created by tsuna on 9/9/25.
//

#ifndef RO_BARTER_EDITOR_FLAG_H
#define RO_BARTER_EDITOR_FLAG_H

#include "../config.h"

class Flag {
    protected:
        bool buyingStore;
        bool deadBranch;
        bool container;
        bool uniqueId;
        bool bindOnEquip;
        bool dropAnnounce;
        bool noConsume;
        std::string dropEffect;
    public:
        Flag(bool, bool, bool, bool, bool, bool, bool, std::string);
        Flag();
        ~Flag();

        bool getBuyingStore() const;
        bool getDeadBranch() const;
        bool getContainer() const;
        bool getUniqueId() const;
        bool getBindOnEquip() const;
        bool getDropAnnounce() const;
        bool getNoConsume() const;
        std::string getDropEffect() const;

        void setBuyingStore(bool);
        void setDeadBranch(bool);
        void setContainer(bool);
        void setUniqueId(bool);
        void setBindOnEquip(bool);
        void setDropAnnounce(bool);
        void setNoConsume(bool);
        void setDropEffect(const std::string&);
};


#endif //RO_BARTER_EDITOR_FLAG_H