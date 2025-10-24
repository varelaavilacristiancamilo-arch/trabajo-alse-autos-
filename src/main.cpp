#include "../include/Auto.h"
#include "../include/Bicicleta.h"
#include "../include/SistemaAlquiler.h"
#include <iostream>
using namespace std;

int main() {
    SistemaAlquiler sistema;
    int opcion;

    do {
        cout << "\n===== Sistema de Alquiler de Vehículos =====\n";
        cout << "1. Registrar Auto\n";
        cout << "2. Registrar Bicicleta\n";
        cout << "3. Alquilar vehículo\n";
        cout << "4. Devolver vehículo\n";
        cout << "5. Mostrar vehículos disponibles\n";
        cout << "6. Salir\n";
        cout << "Opción: ";
        cin >> opcion;
        cin.ignore();

        if(opcion == 1){
            string m, mo, p; int c;
            cout << "Marca: "; getline(cin, m);
            cout << "Modelo: "; getline(cin, mo);
            cout << "Placa: "; getline(cin, p);
            cout << "Capacidad pasajeros: "; cin >> c; cin.ignore();
            sistema.registrarVehiculo(new Auto(m, mo, p, c));
        } else if(opcion == 2){
            string m, mo, p; char c;
            cout << "Marca: "; getline(cin, m);
            cout << "Modelo: "; getline(cin, mo);
            cout << "Placa: "; getline(cin, p);
            cout << "Tiene cambio (s/n): "; cin >> c; cin.ignore();
            sistema.registrarVehiculo(new Bicicleta(m, mo, p, c=='s'||c=='S'));
        } else if(opcion == 3){
            string p;
            cout << "Placa del vehículo a alquilar: "; getline(cin, p);
            sistema.alquilarVehiculo(p);
        } else if(opcion == 4){
            string p;
            cout << "Placa del vehículo a devolver: "; getline(cin, p);
            sistema.devolverVehiculo(p);
        } else if(opcion == 5){
            sistema.mostrarVehiculosDisponibles();
        }
    } while(opcion != 6);

    return 0;
}
