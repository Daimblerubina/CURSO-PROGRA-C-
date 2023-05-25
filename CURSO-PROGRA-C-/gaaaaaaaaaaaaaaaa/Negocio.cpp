#include <iostream>
#include <cstdlib>
#include "Negocio.h"

using namespace std;

Negocio :: Negocio(){
}

Negocio :: Negocio(string nombreNegocio_, string numerotelefonico_, string curp_, string rfc_, string correoNegocio_, string contrasenaNegocio_, string ResponsableTarjeta_, string numTarjeta_, string fechaDeVencimiento_, string CVV_)
{
    nombreNegocio = nombreNegocio_;
    numerotelefonico = numerotelefonico_;
    curp = curp_;
    rfc = rfc_;
    correoNegocio = correoNegocio_;
    contrasenaNegocio = contrasenaNegocio_;
    responsableTarjeta = ResponsableTarjeta_;
    numTarjeta = numTarjeta_;
    fechaDeVencimiento = fechaDeVencimiento_;
    CVV = CVV_;
}

string Negocio :: getNombreNegocio()
{
    return nombreNegocio;
}

string Negocio :: getNumeroTelefonico()
{
    return numerotelefonico;
}

string Negocio :: getCurp()
{
    return curp;
}

string Negocio :: getRfc()
{
    return rfc;
}

string Negocio :: getCorreoNegocio()
{
    return correoNegocio;
}

string Negocio :: getContrasenaNegocio()
{
    return contrasenaNegocio;
}

string Negocio :: getResponsableTarjeta()
{
    return responsableTarjeta;
}

string Negocio :: getNumTarjeta()
{
    return numTarjeta;
}

string Negocio :: getFechaDeVencimiento()
{
    return fechaDeVencimiento;
}

string Negocio :: getCVV()
{
    return CVV;
}

void Negocio :: setNombreNegocio(string nombreNegocio_)
{
    nombreNegocio = nombreNegocio_;
}

void Negocio :: setNumeroTelefonico(string numerotelefonico_)
{
    numerotelefonico = numerotelefonico_;
}

void Negocio :: setCurp(string curp_)
{
    curp = curp_;
}

void Negocio :: setRfc(string rfc_)
{
    rfc = rfc_;
}

void Negocio :: setCorreoNegocio(string correoNegocio_)
{
    correoNegocio = correoNegocio_;
}

void Negocio :: setContrasenaNegocio(string contrasenaNegocio_)
{
    contrasenaNegocio = contrasenaNegocio_;
}

void Negocio :: setResponsableTarjeta(string ResponsableTarjeta_)
{
    responsableTarjeta = ResponsableTarjeta_;
}

void Negocio :: setNumeroTarjeta(string numTarjeta_)
{
    numTarjeta = numTarjeta_;
}

void Negocio :: setFechaDeVencimiento(string fechaDeVencimiento_)
{
    fechaDeVencimiento = fechaDeVencimiento_;
}

void Negocio :: setCVV(string CVV_)
{
    CVV = CVV_;
}

void Negocio :: agregarTarjeta()
{
    cout << "Introduce el nombre del responsable de la tarjeta" << endl;
    cin >> responsableTarjeta;
    cout << "Introduce tu número de tarjeta" << endl;
    cin >> numTarjeta;
    cout << "Introduce la fecha de vencimiento de la tarjeta" << endl;
    cin >> fechaDeVencimiento;
    cout << "Introduce tu CVV" << endl;
    cin >> CVV;
}