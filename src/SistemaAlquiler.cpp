#include "../include/SistemaAlquiler.h"
#include <iostream>
using namespace std;

void SistemaAlquiler::registrarVehiculo(Vehiculo* v) {
    vehiculos.push_back(v);
}

void SistemaAlquiler::alquilarVehiculo(const string &placa) {
    for(auto v : vehiculos){
        if(v->getPlaca() == placa){
            if(v->estaDisponible()){
                v->alquilar();
                cout << "Vehículo alquilado.\n";
            } else {
                cout << "Vehículo no disponible.\n";
            }
            return;
        }
    }
    cout << "Vehículo no encontrado.\n";
}

void SistemaAlquiler::devolverVehiculo(const string &placa) {
    for(auto v : vehiculos){
        if(v->getPlaca() == placa){
            v->devolver();
            cout << "Vehículo devuelto.\n";
            return;
        }
    }
    cout << "Vehículo no encontrado.\n";
}

void SistemaAlquiler::mostrarVehiculosDisponibles() const {
    for(auto v : vehiculos){
        if(v->estaDisponible()) v->mostrarInformacion();
    }
}
