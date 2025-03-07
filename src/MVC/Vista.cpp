//
// Created by tsuna on 6/03/25.
//

#include "Vista.h"

Vista::Vista() = default;

Vista::~Vista() = default;

void Vista::readState(Shop &pShop, const std::vector<Database> &pDatabases) {
    CLEARCONSOLE;

    pShop.shopValues();

    for (auto &db : pDatabases) db.dbValues();

    std::cout << "Press any key to continue";
    PAUSECONSOLE;
}


void Vista::tMainMenu() {
    CLEARCONSOLE;
    std::cout << "Welcome to the RO Editor" << std::endl;
    std::cout << "1. Barter Editor" <<std::endl;
    std::cout << "Select option:" <<std::endl;
    std::cout << std::endl;
    std::cout << "0. Exit" << std::endl;
    gotoxy(16, 3);
}

void Vista::tBarterMenu() {
    CLEARCONSOLE;
    std::cout << "Welcome to Barter Editor" << std::endl;
    std::cout << "1. Add" <<std::endl;
    std::cout << "2. Remove" << std::endl;
    std::cout << "3. Update" << std::endl;
    std::cout << "3. Show Shop" << std::endl;
    std::cout << "4. Show Database" << std::endl;
    std::cout << "Select option:" <<std::endl;
    std::cout << std::endl;
    std::cout << "0. Back" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    gotoxy(16, 7);
}

void Vista::tAddMenu() {
    CLEARCONSOLE;
    std::cout << "Select what you want to add" << std::endl;
    std::cout << "1. Add Category" << std::endl;
    std::cout << "2. Add Item" <<std::endl;
    std::cout << "Select option:" <<std::endl;
    std::cout << std::endl;
    std::cout << "0. Back" << std::endl;
    gotoxy(16, 4);
}

void Vista::tAddCategory() {
    CLEARCONSOLE;
    std::cout << "Write the name of the category:" << std::endl;
    std::cout << std::endl;
    std::cout << "0. Back" << std::endl;
    gotoxy(33, 1);
}

void Vista::tWarningAddCategory() {
    gotoxy(0, 10);

    std::cout << "The category has been added";

    gotoxy(16, 7);
}

void Vista::tErrorAddCategory() {
    CLEARCONSOLE;
    std::cout << "The category already exists" << std::endl;
    std::cout << "Select option:" <<std::endl;
    std::cout << std::endl;
    std::cout << "0. Back";
    gotoxy(16, 2);
}

void Vista::tInput(std::string& pInput) {
    std::cin >> pInput;
}

void Vista::gotoxy(const int x, const int y) {
    if (x < 0 || y < 0) return;

    PLATFORMGOTOXY;
}