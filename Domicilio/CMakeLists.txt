cmake_minimum_required(VERSION 3.30)
project(Pedido)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pedido main.cpp
        src/Plato.cpp
        src/Plato.h
        src/Cliente.cpp
        src/Cliente.h
        src/Pedido.cpp
        src/Pedido.h
)
