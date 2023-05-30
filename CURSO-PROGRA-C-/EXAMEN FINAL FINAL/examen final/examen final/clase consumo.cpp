#include<iostream>
using namespace std;
#include "clase cliente.cpp"

// Declaración de la clase "Consumo" que hereda de la clase "Cliente"
class Consumo : public Cliente {
private:
    string producto;  // Nombre del producto consumido
    int cantidad;     // Cantidad del producto consumido
public:
    // Constructor con parámetros
    Consumo(string _nombre, int _dni, string _producto, int _cantidad);
    
    Consumo(){}  // Constructor predeterminado sin parámetros
    
    // Función miembro para obtener el nombre del producto
    string getProducto();
    
    // Función miembro para obtener la cantidad del producto
    int getCantidad();
};

// Definición del constructor con parámetros
Consumo::Consumo(string _nombre, int _dni, string _producto, int _cantidad) : Cliente(_nombre, _dni) {
    producto = _producto;  // Establece el nombre del producto consumido
    cantidad = _cantidad;  // Establece la cantidad del producto consumido
}

// Definición de la función miembro getProducto()
string Consumo::getProducto() {
    return producto;  // Devuelve el nombre del producto
}

// Definición de la función miembro getCantidad()
int Consumo::getCantidad() {
    return cantidad;  // Devuelve la cantidad del producto
}
