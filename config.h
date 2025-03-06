//
// Created by tsuna on 4/03/25.
//

#ifndef CONFIG_H
#define CONFIG_H

#define VERSION "4/03/25"

#ifdef _WIN32
#elif __linux__
#define SHOP "/media/tsuna/TsunaDomain/Joan0/Documents/Server/rAthena/rathena-tests/npc/custom/barters/cashshop.yml"
#define DBEQUIP "/media/tsuna/TsunaDomain/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_equip.yml"
#define DBUSABLE "/media/tsuna/TsunaDomain/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_usable.yml"
#define DBETC "/media/tsuna/TsunaDomain/Joan0/Documents/Server/rAthena/rathena-tests/db/re/item_db_etc.yml"
#endif

#define INTNULL (-1)
#define STRNULL "NULL"
#define TYPEDEFAULT "Etc"
#define WEIGHTDEFAULT 0

#define VISTACONSOLA "Consola"
#define VISTAGUI "GUI"

#ifdef _WIN32
#define CLEARCONSOLE system("cls")
#define PAUSECONSOLE system("pause")
#elif __linux__
#define CLEARCONSOLE system("clear")
#define PAUSECONSOLE std::cin.get()
#endif

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <utility>

#endif //CONFIG_H
