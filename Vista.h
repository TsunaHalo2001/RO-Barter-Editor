//
// Created by tsuna on 6/03/25.
//

#ifndef VISTA_H
#define VISTA_H

#include "config.h"
#include "Shop.h"
#include "Database.h"

class Vista {
    public:
        Vista();
        ~Vista();

        void readState(Shop &, const std::vector<Database> &);
        void tMMenu();
        void tBMenu();
};



#endif //VISTA_H
