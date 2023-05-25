#ifndef CLIENTE
#define CLIENTE
#include <iostream>
#include <string.h>
#include "Usuario.h"
using namespace std;

class Cliente
{
    private:
    Usuario ingresoUsuario;
    string nombreResponsableTarjeta;
    string numeroTarjeta;
    string fechaVencimiento;
    string CVV;

    public:
    Cliente();
    Cliente(string, string, string, string, string, string);
    string getCorreoUsuario();
    string getContrasenaUsuario();
    string getNombreResponsableTarjeta();
    string getNumeroTarjeta();
    string getFechaVencimiento();
    string getCVV();
    void setCorreoUsuario(string);
    void setContrasenaUsuario(string);
    void setNombreResponsableTarjeta(string);
    void setNumeroTarjeta(string);
    void setFechaVencimiento(string);
    void setCVV(string);
    void agregarNuevaTarjeta();
};

#endif