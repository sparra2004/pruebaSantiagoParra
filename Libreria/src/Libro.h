//
// Created by santiago on 6/03/2025.
//

#ifndef LIBRERIA_LIBRO_H
#define LIBRERIA_LIBRO_H
#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string genero;
    int id;
    string estado;
public:
    Libro() = default;
    Libro(string, string, string, int, string);
    void obtenerInformacion();
    void actualizarEstado(string estado);
    int getId();

};


#endif //LIBRERIA_LIBRO_H
