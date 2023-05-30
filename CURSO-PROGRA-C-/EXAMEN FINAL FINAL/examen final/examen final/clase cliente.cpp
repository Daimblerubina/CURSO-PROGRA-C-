#include<iostream>
using namespace std;

class Cliente {
private:
    string nombrec;  // Nombre del cliente
    int dni;         // Número de identificación
public:
    Cliente(){}  // Constructor predeterminado sin parámetros

    // Constructor con parámetros
    Cliente(string _nombrec, int _dni);

    // Función miembro para obtener el nombre del cliente
    string getnombrec();

    // Función miembro para obtener el número de identificación del cliente
    int getdni();
};

// Definición del constructor con parámetros
Cliente::Cliente(string _nombrec, int _dni) {
    nombrec = _nombrec;  // Establece el nombre del cliente
    dni = _dni;         // Establece el número de identificación
}

// Definición de la función miembro getnombrec()
string Cliente::getnombrec(){
    return nombrec;  // Devuelve el nombre del cliente
}

// Definición de la función miembro getdni()
int Cliente::getdni(){
    return dni;  // Devuelve el número de identificación del cliente
}
