//
// Created by santiago on 6/03/2025.
//

#include "Cliente.h"
Cliente::Cliente(string nombre, string telefono) {
    this->nombre = nombre;
    this->telefono = telefono;
}

void Cliente::mostrarInfo() {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Telefono: " << this->telefono << endl;
}

string Cliente::getNombre(){
    return this->nombre;
}
