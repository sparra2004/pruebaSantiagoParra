#include "src/Automovil.h"
#include <iostream>
#include "src/Persona.h"
#include <string>
using namespace std;

void iniciar(){
    Persona juan("Juan Perez", 30);
    Automovil ferrari("Toyota", 2020);
    juan.agregarAutomovil(ferrari);
    juan.mostrarInfo();

    Persona pedro("Pedro Pascal", 25);
    Automovil mercedes("Mercedes", 2015);
    pedro.agregarAutomovil(mercedes);
    pedro.mostrarInfo();

}
int main() {

    iniciar();
    return 0;
}