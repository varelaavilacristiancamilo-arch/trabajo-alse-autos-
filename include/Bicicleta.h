#ifndef BICICLETA_H
#define BICICLETA_H

#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
private:
    bool tieneCambio; // si tiene cambios de velocidad

public:
    Bicicleta(string m, string mo, string p, bool c);
    void mostrarInformacion() const override;
};

#endif
