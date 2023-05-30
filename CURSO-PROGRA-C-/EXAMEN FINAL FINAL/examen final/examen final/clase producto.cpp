#include<iostream>
#include "clase moto.cpp"
#include "clase repuestos.cpp"
using namespace std;

// Declaración de la clase "Producto" que hereda de las clases "Moto" y "Repuesto"
class Producto : public Moto, public Repuesto {
public:
    // Constructor con parámetros
    Producto(string _modelo, int _stock, string _nombre, int _stockr) : Moto(_modelo, _stock), Repuesto(_nombre, _stockr) {}
};
