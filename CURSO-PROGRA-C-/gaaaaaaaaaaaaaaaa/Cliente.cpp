#include <iostream>
#include <cstdlib>
#include "Cliente.h"
using namespace std;

Cliente :: Cliente(){
}

Cliente :: Cliente(string correoUsuario_, string contrasenaUsuario_, string nombreResponsableTarjeta_, string numeroTarjeta_, string fechaVencimiento_, string CVV_)
{
    ingresoUsuario.setCorreoUsuario(correoUsuario_);
    ingresoUsuario.setContrasenaUsuario(contrasenaUsuario_);
    nombreResponsableTarjeta = nombreResponsableTarjeta_;
    numeroTarjeta = numeroTarjeta_;
    fechaVencimiento = fechaVencimiento_;
    CVV = CVV_;
}

string Cliente :: getCorreoUsuario()
{
    return ingresoUsuario.getCorreoUsuario();
}

string Cliente :: getContrasenaUsuario()
{
    return ingresoUsuario.getContrasenaUsuario();
}

string Cliente :: getNombreResponsableTarjeta()
{
    return nombreResponsableTarjeta;
}

string Cliente :: getNumeroTarjeta()
{
    return numeroTarjeta;
}

string Cliente :: getFechaVencimiento()
{
    return fechaVencimiento;
}

string Cliente :: getCVV()
{
    return CVV;
}

void Cliente :: setCorreoUsuario(string correoUsuario_)
{
    ingresoUsuario.setCorreoUsuario(correoUsuario_);
}

void Cliente :: setContrasenaUsuario(string contrasenaUsuario_)
{
    ingresoUsuario.setContrasenaUsuario(contrasenaUsuario_);
}

void Cliente :: setNombreResponsableTarjeta(string nombreResponsableTarjeta_)
{
    nombreResponsableTarjeta = nombreResponsableTarjeta_;
}

void Cliente :: setNumeroTarjeta(string numeroTarjeta_)
{
    numeroTarjeta = numeroTarjeta_;
}

void Cliente :: setFechaVencimiento(string fechaVencimiento_)
{
    fechaVencimiento = fechaVencimiento_;
}

void Cliente :: setCVV(string CVV_)
{
    CVV = CVV_;
}

void Cliente :: agregarNuevaTarjeta()
{
    cout << "Introduce el nombre del responsable de la tarjeta" << endl;
    cin >> nombreResponsableTarjeta;
    cout << "Introduce tu número de tarjeta" << endl;
    cin >> numeroTarjeta;
    cout << "Introduce la fecha de vencimiento de la tarjeta" << endl;
    cin >> fechaVencimiento;
    cout << "Introduce tu CVV" << endl;
    cin >> CVV;
}


