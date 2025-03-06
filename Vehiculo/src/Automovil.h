//
// Created by santiago on 5/03/2025.
//

#ifndef VEHICULO_AUTOMOVIL_H
#define VEHICULO_AUTOMOVIL_H
#include <iostream>

using namespace std;

class Automovil {
private:
    string marca;
    int anio;

public:
    Automovil() = default;
    Automovil(string, int);
    void mostrarInfo();
};



#endif //VEHICULO_AUTOMOVIL_H
