#include "../include/Auto.h"
#include <iostream>
using namespace std;

Auto::Auto(string m, string mo, string p, int c)
    : Vehiculo(m, mo, p), capacidadPasajeros(c) {}

void Auto::mostrarInformacion() const {
    Vehiculo::mostrarInformacion();
    cout << "Capacidad de pasajeros: " << capacidadPasajeros << "\n";
}
