cmake_minimum_required(VERSION 3.30)
project(Vehiculo)

set(CMAKE_CXX_STANDARD 20)

add_executable(Vehiculo main.cpp
        src/Persona.cpp
        src/Persona.h
        src/Automovil.cpp
        src/Automovil.h)
