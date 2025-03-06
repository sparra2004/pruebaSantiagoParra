//
// Created by santiago on 5/03/2025.
//

#ifndef VEHICULO_PERSONA_H
#define VEHICULO_PERSONA_H

#include "Automovil.h"

class Persona {
private:
    string nombre;
    int edad;
    Automovil automovil;
public:
    Persona(string nombre, int edad);
    void agregarAutomovil(Automovil automovil);
    void mostrarInfo();
};


#endif //VEHICULO_PERSONA_H
