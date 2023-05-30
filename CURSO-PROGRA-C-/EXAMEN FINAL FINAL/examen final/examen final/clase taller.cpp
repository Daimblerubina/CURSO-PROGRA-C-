#include<iostream>
using namespace std;

class Taller {
private:
    string nom_servicio;   // Nombre del servicio realizado en el taller
    string realizador;     // Nombre del realizador del servicio
    int tiempo_h;          // Horas del servicio
    int tiempo_m;          // Minutos del servicio
public:
    Taller(){}  // Constructor predeterminado sin parámetros

    // Constructor con parámetros para servicio con tiempo
    Taller(string _nom_servicio, string _realizador, int _tiempo_h, int _tiempo_m);

    // Constructor con parámetros para servicio sin tiempo
    Taller(string _nom_servicio, string _realizador);

    string getnom_servicio();  // Función miembro para obtener el nombre del servicio
    string getrealizador();    // Función miembro para obtener el nombre del realizador del servicio
    int gettiempo_h();         // Función miembro para obtener las horas del servicio
    int gettiempo_m();         // Función miembro para obtener los minutos del servicio
    void mostrarserv();        // Función miembro para mostrar el servicio
};

// Definición del constructor con parámetros para servicio con tiempo
Taller::Taller(string _nom_servicio, string _realizador, int _tiempo_h, int _tiempo_m) {
    nom_servicio = _nom_servicio;   // Establece el nombre del servicio
    realizador = _realizador;       // Establece el nombre del realizador del servicio
    tiempo_h = _tiempo_h;           // Establece las horas del servicio
    tiempo_m = _tiempo_m;           // Establece los minutos del servicio
}

// Definición del constructor con parámetros para servicio sin tiempo
Taller::Taller(string _nom_servicio, string _realizador) {
    nom_servicio = _nom_servicio;   // Establece el nombre del servicio
    realizador = _realizador;       // Establece el nombre del realizador del servicio
}

// Definición de la función miembro getnom_servicio()
string Taller::getnom_servicio() {
    return nom_servicio;   // Devuelve el nombre del servicio
}

// Definición de la función miembro getrealizador()
string Taller::getrealizador() {
    return realizador;     // Devuelve el nombre del realizador del servicio
}

// Definición de la función miembro gettiempo_h()
int Taller::gettiempo_h() {
    return tiempo_h;   // Devuelve las horas del servicio
}

// Definición de la función miembro gettiempo_m()
int Taller::gettiempo_m() {
    return tiempo_m;   // Devuelve los minutos del servicio
}

// Definición de la función miembro mostrarserv()
void Taller::mostrarserv() {
    cout << "Servicio: " << nom_servicio << endl;
    cout << "Realizador: " << realizador << endl;
    cout << "Duración: " << tiempo_h << " horas " << tiempo_m << " minutos" << endl;
}
