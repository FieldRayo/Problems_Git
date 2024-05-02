cmake_minimum_required(VERSION 3.27)
project(Problems_Git)

set(CMAKE_CXX_STANDARD 17)

add_executable(Problems_Git CodeWars/Roman_Numbers.cpp
        CETI/Programación-2/main.cpp
        CETI/Programación-2/Mate.cpp
        CETI/Programación-2/Negocios.cpp)
