//
// Created by santiago on 6/03/2025.
//

#include "Pedido.h"
#include "cliente.h"
using namespace std;

Pedido:: Pedido(int nPedido,string estado, Cliente cliente){
    this->nPedido = nPedido;
    this->estado = estado;
    this->cliente = cliente;
}

void Pedido:: actualizarEstado(string estado){
    this->estado = estado;
}

void Pedido::agregarPlato(Plato plato){
    this->platos.push_back(plato);
}

void Pedido::mostrarPedido() {
    cout << "Pedido: " << this->nPedido << endl;
    cout << "Estado: " << this->estado << endl;
    cout << "Cliente: " << this->cliente.getNombre() << endl;
    for(int i = 0; i < platos.size(); i++){
        platos[i].mostrarInformacion();
    }
    cout << endl;
}

int Pedido::calcularTotal() {
    int total = 0;
    for(int i = 0; i < platos.size(); i++){
        if(platos[i].getPrecio() != 0){
            total += platos[i].getPrecio();
        }
    }
    return total;
}