#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    string placa;
    bool disponible;

public:
    Vehiculo(string m, string mo, string p, bool d=true);
    virtual void mostrarInformacion() const;
    void alquilar();
    void devolver();
    bool estaDisponible() const;
    string getPlaca() const;
};

#endif
