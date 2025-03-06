//
// Created by santiago on 5/03/2025.
//

#include "Automovil.h"

using namespace std;

Automovil::Automovil(string marca, int anio) {
    this->marca = marca;
    this->anio = anio;
}

void Automovil::mostrarInfo() {

    cout << "Marca: " << marca <<" Modelo: " << anio << endl;

}
