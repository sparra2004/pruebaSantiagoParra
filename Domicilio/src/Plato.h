//
// Created by santiago on 6/03/2025.
//

#ifndef PEDIDO_PLATO_H
#define PEDIDO_PLATO_H

#include <iostream>
#include <string>

using namespace std;

class Plato {
private:
    string nombrePlato;
    float precio;
public:
    Plato(string, float);
    void mostrarInformacion();
    int getPrecio();
};


#endif //PEDIDO_PLATO_H
