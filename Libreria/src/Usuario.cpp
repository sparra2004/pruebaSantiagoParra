//
// Created by santiago on 6/03/2025.
//

#include "Usuario.h"
Usuario::Usuario(int id, string nombre){
    this -> id = id;
    this -> nombre = nombre;
}
void Usuario::comprarLibro(Libro libro){
    this->libros.push_back(libro);
}
void Usuario::regalarLibro(int idLibro) {
    for (int i = 0; i < this->libros.size(); i++) {
        if (this->libros[i].getId() == idLibro) {
            cout << this->nombre << " regalo el libro con id: " << libros[i].getId() << endl;
            libros.erase(libros.begin() + i);
            return;
        }
    }
    cout << "No se encontro el libro con el id: " << idLibro << endl;
}
void Usuario::mostrarLibros() {
    if (libros.empty()) {
        cout << this->nombre << " no tiene libros." << endl;
        return;
    }

    for (int i = 0; i < libros.size(); i++) {
        cout << "Informacion: ";
        libros[i].obtenerInformacion();
        cout << endl;
    }
}