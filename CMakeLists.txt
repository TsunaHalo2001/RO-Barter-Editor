cmake_minimum_required(VERSION 3.30)
project(RO_Barter_Editor)

set(CMAKE_CXX_STANDARD 20)

add_executable(RO_Barter_Editor main.cpp
        Cost.cpp
        Cost.h
        config.h
        Item.cpp
        Item.h
        Category.cpp
        Category.h
        Shop.cpp
        Shop.h
        Database.cpp
        Database.h
        ItemDB.cpp
        ItemDB.h)
