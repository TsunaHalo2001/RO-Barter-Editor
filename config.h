//
// Created by tsuna on 4/03/25.
//

#ifndef CONFIG_H
#define CONFIG_H

#define VERSION "4/03/25"

#ifdef _WIN32
#define SHOP "D:/Joan0/Documents/Server/rAthena/rathena-tests/npc/custom/barters/cashshop.yml"
#define DBEQUIP "D:/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_equip.yml"
#define DBUSABLE "D:/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_usable.yml"
#define DBETC "D:/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_etc.yml"
#elif __linux__
#define SHOP "/media/tsuna/TsunaDomain/Joan0/Documents/Server/rAthena/rathena-tests/npc/custom/barters/cashshop.yml"
#define DBEQUIP "/media/tsuna/TsunaDomain/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_equip.yml"
#define DBUSABLE "/media/tsuna/TsunaDomain/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_usable.yml"
#endif

#define INTNULL (-1)
#define STRNULL "NULL"
#define STRNONE "NONE"
#define TYPEDEFAULT "Etc"
#define SUBTYPEDEFAULT "0"
#define INTDEFAULT 0
#define OVERRIDEDEFAULT 100
#define BOOLDEFAULT false
#define INVENTORYDEFAULT true

#define VISTACONSOLA "Consola"
#define VISTAGUI "GUI"

#ifdef _WIN32
#define CLEARCONSOLE system("cls")
#define PAUSECONSOLE system("pause")
#define PLATFORMGOTOXY COORD coord; coord.X = x; coord.Y = y; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
#elif __linux__
#define CLEARCONSOLE system("clear")
#define PAUSECONSOLE std::cin.get()
#define PLATFORMGOTOXY std::printf("\033[%d;%dH", y, x)
#endif

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <utility>
#include <yaml-cpp/yaml.h>

#endif //CONFIG_H
