//
// Created by tsuna on 6/03/25.
//

#include "Vista.h"

#include "Database.h"
#include "Shop.h"

Vista::Vista() = default;

Vista::~Vista() = default;

void Vista::readState(Shop &pShop, const std::vector<Database> &pDatabases) {
    CLEARCONSOLE;

    pShop.shopValues();

    for (auto &db : pDatabases) db.dbValues();

    std::cout << "Press any key to continue";
    PAUSECONSOLE;
}


void Vista::tMMenu() {
    CLEARCONSOLE;
    std::cout << "Welcome to the RO Editor" << std::endl;
    std::cout << "1. Barter Editor" <<std::endl;

    std::cout << "0. Exit" << std::endl;
}

void Vista::tBMenu() {
    CLEARCONSOLE;
    std::cout << "Welcome to Barter Editor" << std::endl;
    std::cout << "1. Add" <<std::endl;
    std::cout << "2. Remove" << std::endl;
    std::cout << "3. Update" << std::endl;
    std::cout << "3. Show Shop" << std::endl;
    std::cout << "4. Show Database" << std::endl;

    std::cout << "0. Back" << std::endl;
}