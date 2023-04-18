#include <iostream>
#include <string>

using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

int main() {
    // Declarar un arreglo de 5 productos
    Producto productos[5];

    // productos xd
    productos[0].nombre = "Libreta";
    productos[0].precio = 2.5;
    productos[0].cantidad = 10;

    productos[1].nombre = "Boligrafo";
    productos[1].precio = 1.0;
    productos[1].cantidad = 20;

    productos[2].nombre = "Cuaderno";
    productos[2].precio = 3.0;
    productos[2].cantidad = 5;

    productos[3].nombre = "Lapicera";
    productos[3].precio = 0.5;
    productos[3].cantidad = 30;

    productos[4].nombre = "Goma";
    productos[4].precio = 0.25;
    productos[4].cantidad = 15;

    return 0;
}
