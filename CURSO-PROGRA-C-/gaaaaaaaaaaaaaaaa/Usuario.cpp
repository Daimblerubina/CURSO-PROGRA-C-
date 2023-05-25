#include <iostream>
#include <cstdlib>
#include "Usuario.h"
using namespace std;

Usuario :: Usuario(){
}

Usuario :: Usuario(string nombreUsuario_, string apellidoUsuario_, string genero_, int edad_, string nacionalidad_, string cumpleaniosUsuario_, string correoUsuario_, string contrasenaUsuario_)
{
    nombreUsuario = nombreUsuario_;
    apellidoUsuario = apellidoUsuario_;
    genero = genero_;
    edad = edad_;
    nacionalidad = nacionalidad_;
    cumpleaniosUsuario = cumpleaniosUsuario_;
    correoUsuario = correoUsuario_;
    contrasenaUsuario = contrasenaUsuario_;
}

string Usuario :: getNombreUsuario()
{
    return nombreUsuario;
}

string Usuario :: getApellidoUsuario()
{
    return apellidoUsuario;
}

string Usuario :: getGenero()
{
    return genero;
}

int Usuario :: getEdad()
{
    return edad;
}

string Usuario :: getNacionalidad()
{
    return nacionalidad;
}

string Usuario :: getCumpleaniosUsuario()
{
    return cumpleaniosUsuario;
}

string Usuario :: getCorreoUsuario()
{
    return correoUsuario;
}

string Usuario :: getContrasenaUsuario()
{
    return contrasenaUsuario;
}

void Usuario :: setNombreUsuario(string nombreUsuario_)
{
    nombreUsuario = nombreUsuario_;
}

void Usuario :: setApellidoUsuario(string apellidoUsuario_)
{
    apellidoUsuario = apellidoUsuario_;
}

void Usuario :: setGenero(string genero_)
{
    genero = genero_;
}

void Usuario :: setEdad(int edad_)
{
    edad = edad_;
}

void Usuario :: setNacionalidad(string nacionalidad_)
{
    nacionalidad = nacionalidad_;
}

void Usuario :: setCumpleaniosUsuario(string cumpleaniosUsuario_)
{
    cumpleaniosUsuario = cumpleaniosUsuario_;
}

void Usuario :: setCorreoUsuario(string correoUsuario_)
{
    correoUsuario = correoUsuario_;
}

void Usuario :: setContrasenaUsuario(string contrasenaUsuario_)
{
    contrasenaUsuario = contrasenaUsuario_;
}
