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

    //  los productos xd
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

    // Encontrar el precio máximo de los productos
    double precioMaximo = productos[0].precio;
    for (int i = 1; i < 5; i++) {
        if (productos[i].precio > precioMaximo) {
            precioMaximo = productos[i].precio;
        }
    }

    // Imprimir el precio máximo de los productos
    cout << "El precio máximo de los productos es: " << precioMaximo << endl;

// Encontrar el índice del producto con el precio máximo
int indiceMaximo = 0;
for (int i = 1; i < 5; i++) {
    if (productos[i].precio > productos[indiceMaximo].precio) {
        indiceMaximo = i;
    }
}

// Imprimir el índice del producto con el precio máximo
cout << "El índice del producto con el precio máximo es: " << indiceMaximo << endl;

    return 0;
}
