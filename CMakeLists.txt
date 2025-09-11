cmake_minimum_required(VERSION 3.30)
project(RO_Barter_Editor)

set(CMAKE_CXX_STANDARD 20)

find_package(yaml-cpp REQUIRED)

add_executable(RO_Barter_Editor main.cpp
        src/Cost.cpp
        src/Cost.h
        config.h
        src/Item.cpp
        src/Item.h
        src/Category.cpp
        src/Category.h
        src/Shop.cpp
        src/Shop.h
        src/Database.cpp
        src/Database.h
        src/ItemDB.cpp
        src/ItemDB.h
        src/MVC/Modelo.cpp
        src/MVC/Modelo.h
        src/MVC/Vista.cpp
        src/MVC/Vista.h
        src/MVC/Controlador.cpp
        src/MVC/Controlador.h
        src/Flag.cpp
        src/Flag.h
        src/Delay.cpp
        src/Delay.h
        src/Stack.cpp
        src/Stack.h
        src/NoUse.cpp
        src/NoUse.h
        src/Trade.cpp
        src/Trade.h
        src/Config.cpp
        src/Config.h
)

target_link_libraries(RO_Barter_Editor yaml-cpp)