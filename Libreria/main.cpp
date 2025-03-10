#include <iostream>
#include "src/Usuario.h"
#include "src/Libro.h"

using namespace std;

void solve() {
    // Crear libros
    Libro harry("Harry Potter", "J.K. Rowling", "Ficcion", 1, "Disponible");
    Libro spiderman("Spiderman", "Stan Lee", "Comic", 5, "Disponible");
    Libro elPrincipito("El Principito", "Antoine", "Fabula", 10, "Disponible");

    // Crear usuarios
    Usuario santiago(1111, "Santiago Parra");
    Usuario maria(2222, "Maria Gomez");

    // Santiago compra libros
    santiago.comprarLibro(harry);
    santiago.comprarLibro(spiderman);
    cout << "Libros de Santiago despues de comprar:" << endl;
    santiago.mostrarLibros();

    // Maria compra un libro
    maria.comprarLibro(elPrincipito);
    cout << "Libros de Maria despues de comprar:" << endl;
    maria.mostrarLibros();



}

int main() {
    solve();
    return 0;
}
