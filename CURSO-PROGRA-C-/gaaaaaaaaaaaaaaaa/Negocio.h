#ifndef NEGOCIO
#define NEGOCIO
#include <iostream>
#include <string.h>
using namespace std;

class Negocio
{
    private:
    string nombreNegocio;
    string numerotelefonico;
    string curp;
    string rfc;
    string correoNegocio;
    string contrasenaNegocio;
    string responsableTarjeta;
    string numTarjeta;
    string fechaDeVencimiento;
    string CVV;

    public:
    Negocio();
    Negocio(string, string, string, string, string, string, string, string, string, string);
    string getNombreNegocio();
    string getNumeroTelefonico();
    string getCurp();
    string getRfc();
    string getCorreoNegocio();
    string getContrasenaNegocio();
    string getResponsableTarjeta();
    string getNumTarjeta();
    string getFechaDeVencimiento();
    string getCVV();
    void setNombreNegocio(string);
    void setNumeroTelefonico(string);
    void setCurp(string);
    void setRfc(string);
    void setCorreoNegocio(string);
    void setContrasenaNegocio(string);
    void setResponsableTarjeta(string);
    void setNumeroTarjeta(string);
    void setFechaDeVencimiento(string);
    void setCVV(string);
    void agregarTarjeta();
};

#endif