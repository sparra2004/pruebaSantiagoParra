//
// Created by santiago on 5/03/2025.
//

#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;

}

void Persona::agregarAutomovil(Automovil automovil){
    this->automovil = automovil;
}

void Persona::mostrarInfo() {
    cout << "Nombre: " << this-> nombre << " Edad: " << this->edad << " Anios"<<" ";
    this->automovil.mostrarInfo();
    cout << endl;
}



