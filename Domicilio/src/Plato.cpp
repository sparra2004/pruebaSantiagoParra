//
// Created by santiago on 6/03/2025.
//

#include "Plato.h"

Plato ::Plato(string nombrePlato, float precio){
    this->nombrePlato = nombrePlato;
    this->precio = precio;
}

void Plato::mostrarInformacion(){
    cout << "Nombre: " << this->nombrePlato << endl;
    cout << "Precio: " << this->precio << endl;

}
int Plato ::getPrecio() {
    return this->precio;
}

