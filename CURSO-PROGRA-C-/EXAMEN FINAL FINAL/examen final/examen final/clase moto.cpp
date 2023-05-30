#include<iostream>
using namespace std;

class Moto {
private:
    string modelo;  // Modelo de la motocicleta
    int stock;      // Cantidad en stock
public:
    Moto(){}  // Constructor predeterminado sin parámetros

    // Constructor con parámetros
    Moto(string _modelo, int _stock);

    string getmodelo();  // Función miembro para obtener el modelo de la motocicleta
    int getstock();      // Función miembro para obtener la cantidad en stock
};

// Definición del constructor con parámetros
Moto::Moto(string _modelo, int _stock) {
    modelo = _modelo;  // Establece el modelo de la motocicleta
    stock = _stock;    // Establece la cantidad en stock
}

// Definición de la función miembro getmodelo()
string Moto::getmodelo() {
    return modelo;  // Devuelve el modelo de la motocicleta
}

// Definición de la función miembro getstock()
int Moto::getstock() {
    return stock;  // Devuelve la cantidad en stock
}
