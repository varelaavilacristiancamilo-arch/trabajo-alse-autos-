#include "../include/Bicicleta.h"
#include <iostream>
using namespace std;

Bicicleta::Bicicleta(string m, string mo, string p, bool c)
    : Vehiculo(m, mo, p), tieneCambio(c) {}

void Bicicleta::mostrarInformacion() const {
    Vehiculo::mostrarInformacion();
    cout << "Tiene cambio: " << (tieneCambio ? "Sí" : "No") << "\n";
}
