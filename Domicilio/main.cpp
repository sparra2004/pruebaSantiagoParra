#include "src/Pedido.h"
#include "src/Cliente.h"

using namespace std;
void solve(){
    Cliente santiago("Santiago", "3123123123");
    Cliente pedro("Pedro", "3123123123");

    Plato carne("Carne", 150);
    Plato pescado("Pescado", 100);
    Plato pollo("Pollo", 250);

    Pedido pedido1(1, "En proceso", santiago);
    pedido1.agregarPlato(carne);
    pedido1.agregarPlato(pescado);
    pedido1.mostrarPedido();
    cout << "Total: " << pedido1.calcularTotal() << endl;
    cout << endl;
    Pedido pedido2(2, "En proceso", pedro);
    pedido2.agregarPlato(pollo);
    pedido2.agregarPlato(carne);
    pedido2.mostrarPedido();
    pedido2.actualizarEstado("Entregado");
    pedido2.mostrarPedido();
    cout << "Total: " << pedido2.calcularTotal() << endl;


}

int main(){
    solve();
    return 0;
}
