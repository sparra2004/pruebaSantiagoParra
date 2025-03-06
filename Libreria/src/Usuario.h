//
// Created by santiago on 6/03/2025.
//

#ifndef LIBRERIA_USUARIO_H
#define LIBRERIA_USUARIO_H

#include <iostream>
#include "Libro.h"
#include <vector>

using namespace std;

class Usuario {
private:
    int id;
    string nombre;
    vector<Libro>libros;
public:
    Usuario(int, string);
    void comprarLibro(Libro libro);
    void regalarLibro(int idLibro);
    void mostrarLibros();
};


#endif //LIBRERIA_USUARIO_H
