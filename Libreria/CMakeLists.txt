cmake_minimum_required(VERSION 3.30)
project(Libreria)

set(CMAKE_CXX_STANDARD 20)

add_executable(Libreria main.cpp
        src/Usuario.cpp
        src/Usuario.h
        src/Libro.cpp
        src/Libro.h)
