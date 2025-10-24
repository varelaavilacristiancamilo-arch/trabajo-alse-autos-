#ifndef SISTEMAALQUILER_H
#define SISTEMAALQUILER_H

#include "Vehiculo.h"
#include <vector>
using namespace std;

class SistemaAlquiler {
private:
    vector<Vehiculo*> vehiculos;

public:
    void registrarVehiculo(Vehiculo* v);
    void alquilarVehiculo(const string &placa);
    void devolverVehiculo(const string &placa);
    void mostrarVehiculosDisponibles() const;
};

#endif
