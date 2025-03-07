//
// Created by santiago on 6/03/2025.
//

#ifndef PEDIDO_CLIENTE_H
#define PEDIDO_CLIENTE_H

#include <iostream>
#include <string>

using namespace std;
class Cliente {
private:
    string nombre;
    string telefono;
public:
    Cliente() = default;
    Cliente(string, string);
    void mostrarInfo();
    string getNombre();
};


#endif //PEDIDO_CLIENTE_H
