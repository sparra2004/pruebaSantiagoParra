//
// Created by santiago on 6/03/2025.
//

#include "Libro.h"

Libro::Libro(string titulo, string autor, string genero, int id, string estado){
    this -> titulo = titulo;
    this -> autor = autor;
    this -> genero = genero;
    this -> id = id;
    this -> estado = estado;
}

void Libro::obtenerInformacion(){
    cout << "Titulo: " << this -> titulo << endl;
    cout << "Autor: " << this -> autor << endl;
    cout << "Genero: " << this -> genero << endl;
    cout << "Id: " << this -> id << endl;
    cout << "Estado: " << this -> estado << endl;
}

void Libro::actualizarEstado(string estado){
    this -> estado = estado;
}

int Libro::getId(){
    return this -> id;
}