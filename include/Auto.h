#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
private:
    int capacidadPasajeros;

public:
    Auto(string m, string mo, string p, int c);
    void mostrarInformacion() const override;
};

#endif
