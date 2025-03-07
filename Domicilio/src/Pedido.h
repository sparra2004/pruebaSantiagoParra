//
// Created by santiago on 6/03/2025.
//

#ifndef PEDIDO_PEDIDO_H
#define PEDIDO_PEDIDO_H
#include <iostream>
#include <string>
#include <vector>
#include "Plato.h"
#include "Cliente.h"
using namespace std;

class Pedido {
private:
    int nPedido;
    string estado;
    Cliente cliente;
    vector<Plato>platos;
    int totalPagar;
public:
    Pedido(int, string, Cliente);
    void actualizarEstado(string);
    void agregarPlato(Plato plato);
    void mostrarPedido();
    int calcularTotal();
};


#endif //PEDIDO_PEDIDO_H
