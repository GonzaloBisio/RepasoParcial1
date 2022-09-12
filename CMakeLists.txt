cmake_minimum_required(VERSION 3.23)
project(RepasoParcial1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Ej1)
include_directories(EJ2)

add_executable(RepasoParcial1
        Ej1/main.cpp
        EJ2/main.cpp
        Lista.h
        Nodo.h
        Pila.h)
