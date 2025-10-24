#include "../include/Vehiculo.h"

Vehiculo::Vehiculo(string m, string mo, string p, bool d)
    : marca(m), modelo(mo), placa(p), disponible(d) {}

void Vehiculo::mostrarInformacion() const {
    cout << "Marca: " << marca 
         << "\nModelo: " << modelo 
         << "\nPlaca: " << placa
         << "\nDisponible: " << (disponible ? "Sí" : "No") 
         << "\n----------------\n";
}

void Vehiculo::alquilar() { disponible = false; }
void Vehiculo::devolver() { disponible = true; }
bool Vehiculo::estaDisponible() const { return disponible; }
string Vehiculo::getPlaca() const { return placa; }
