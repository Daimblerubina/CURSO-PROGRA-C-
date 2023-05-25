#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Clase base: Vehiculo
class Vehiculo {
protected:
    int cilindrada;
    int numAsientos;
    int numRuedas;
    int numPuertas;
    bool certificacionSeguridad;

public:
    // Constructor
    Vehiculo(int cilindrada, int numAsientos, int numRuedas, int numPuertas, bool certificacionSeguridad)
        : cilindrada(cilindrada), numAsientos(numAsientos), numRuedas(numRuedas),
          numPuertas(numPuertas), certificacionSeguridad(certificacionSeguridad) {
    }

    // Método para obtener los detalles del vehículo
    virtual string obtenerDetalles() const {
        string detalles = "Cilindrada: " + to_string(cilindrada) + "cc\n"
                          "Número de asientos: " + to_string(numAsientos) + "\n"
                          "Número de ruedas: " + to_string(numRuedas) + "\n"
                          "Número de puertas: " + to_string(numPuertas) + "\n"
                          "Certificación de seguridad: " + (certificacionSeguridad ? "Sí" : "No") + "\n";
        return detalles;
    }
};

// Clase derivada: Automovil
class Automovil : public Vehiculo {
private:
    string color;
    string marca;

public:
    // Constructor
    Automovil(int cilindrada, int numAsientos, int numRuedas, int numPuertas,
              bool certificacionSeguridad, string color, string marca)
        : Vehiculo(cilindrada, numAsientos, numRuedas, numPuertas, certificacionSeguridad),
          color(color), marca(marca) {
    }

    // Sobrescribir el método obtenerDetalles para incluir color y marca
    string obtenerDetalles() const override {
        string detalles = "Color: " + color + "\n"
                          "Marca: " + marca + "\n";
        detalles += Vehiculo::obtenerDetalles();  // Llamar al método de la clase base
        return detalles;
    }
};

// Clase derivada: Motocicleta
class Motocicleta : public Vehiculo {
private:
    string color;
    string marca;

public:
    // Constructor
    Motocicleta(int cilindrada, int numAsientos, int numRuedas, int numPuertas,
                bool certificacionSeguridad, string color, string marca)
        : Vehiculo(cilindrada, numAsientos, numRuedas, numPuertas, certificacionSeguridad),
          color(color), marca(marca) {
    }

    // Sobrescribir el método obtenerDetalles para incluir color y marca
    string obtenerDetalles() const override {
        string detalles = "Color: " + color + "\n"
                          "Marca: " + marca + "\n";
        detalles += Vehiculo::obtenerDetalles();  // Llamar al método de la clase base
        return detalles;
    }
};

int main() {
    // Crear arreglo de automóviles y motocicletas
    Automovil automoviles[10] = {
        Automovil(2000, 5, 4, 4, true, "Rojo", "Toyota"),
        Automovil(1800, 4, 4, 2, true, "Azul", "Honda"),
        Automovil(1500, 4, 4, 2, true, "negro", "mitsubisi"),
        Automovil(1200, 4, 4, 2, true, "blanco", "volsvagen"),
        Automovil(2100, 2, 4, 2, true, "celeste", "ferrari"),
        Automovil(1900, 4, 4, 2, true, "blanco", "toyota"),
        Automovil(1400, 4, 4, 2, true, "rojo", "Honda"),
        Automovil(1500, 4, 4, 2, true, "amarillo", "audi"),
        Automovil(1800, 4, 4, 2, true, "negro", "lexus"),
        Automovil(1900, 4, 4, 2, true, "amarillo", "lamborgini"),
        // Agrega aquí los otros automóviles de ejemplo
    };

    Motocicleta motocicletas[5] = {
        Motocicleta(1000, 1, 2, 0, false, "Negro", "Yamaha"),
        Motocicleta(750, 1, 2, 0, true, "Blanco", "Suzuki"),
        Motocicleta(200, 2, 2, 0, true, "Blanco", "pulsar"),
        Motocicleta(500, 2, 2, 0, true, "Blanco", "ducati"),
        Motocicleta(390, 2, 2, 0, true, "Blanco", "ktm"),
        // Agrega aquí las otras motocicletas de ejemplo
    };

    // Crear y abrir el archivo de reporte
    ofstream archivoReporte("reporte.txt");

    // Verificar si el archivo se abrió correctamente
    if (!archivoReporte.is_open()) {
        cout << "Error al abrir el archivo de reporte." << endl;
        return 1;
    }

    // Escribir los detalles de los vehículos en el archivo de reporte
    archivoReporte << "Nombre de la tienda: Mi Tienda de Vehículos" << endl << endl;
    archivoReporte << "Automóviles:" << endl;
    for (const Automovil& automovil : automoviles) {
        archivoReporte << automovil.obtenerDetalles() << endl;
    }
    archivoReporte << endl;
    archivoReporte << "Motocicletas:" << endl;
    for (const Motocicleta& motocicleta : motocicletas) {
        archivoReporte << motocicleta.obtenerDetalles() << endl;
    }

    // Cerrar el archivo de reporte
    archivoReporte.close();

    cout << "El reporte ha sido generado exitosamente." << endl;

    return 0;
}
