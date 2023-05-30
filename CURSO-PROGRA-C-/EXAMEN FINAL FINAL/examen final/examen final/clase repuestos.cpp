#include<iostream>
using namespace std;

class Repuesto {
private:
    string nombre;   // Nombre del repuesto
    int stockr;      // Cantidad en stock del repuesto
public:
    Repuesto(string _nombre, int _stockr);  // Constructor con parámetros
    Repuesto(){}  // Constructor predeterminado sin parámetros

    string getnombre();  // Función miembro para obtener el nombre del repuesto
    int getstockr();     // Función miembro para obtener la cantidad en stock del repuesto
};

// Definición del constructor con parámetros
Repuesto::Repuesto(string _nombre, int _stockr) {
    nombre = _nombre;  // Establece el nombre del repuesto
    stockr = _stockr;  // Establece la cantidad en stock del repuesto
}

// Definición de la función miembro getnombre()
string Repuesto::getnombre() {
    return nombre;  // Devuelve el nombre del repuesto
}

// Definición de la función miembro getstockr()
int Repuesto::getstockr() {
    return stockr;  // Devuelve la cantidad en stock del repuesto
}
