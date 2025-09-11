//
// Created by tsuna on 9/9/25.
//

#ifndef RO_BARTER_EDITOR_DELAY_H
#define RO_BARTER_EDITOR_DELAY_H

#include "../config.h"

class Delay {
    protected:
        int duration;
        std::string status;
    public:
        Delay(int, std::string);
        Delay();
        ~Delay();

        int getDuration() const;
        std::string getStatus() const;

        void setDuration(int);
        void setStatus(const std::string&);
};


#endif //RO_BARTER_EDITOR_DELAY_H