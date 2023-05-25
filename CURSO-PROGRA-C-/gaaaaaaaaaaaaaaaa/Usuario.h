#ifndef USUARIO
#define USUARIO
#include <iostream>
#include <string.h>
using namespace std;

class Usuario
{
    private:
    string nombreUsuario;
    string apellidoUsuario;
    string genero;
    int edad;
    string nacionalidad;
    string cumpleaniosUsuario;
    string correoUsuario;
    string contrasenaUsuario;

    public:
    Usuario();
    Usuario(string, string, string, int, string, string, string, string);
    string getNombreUsuario();
    string getApellidoUsuario();
    string getGenero();
    int getEdad();
    string getNacionalidad();
    string getCumpleaniosUsuario();
    string getCorreoUsuario();
    string getContrasenaUsuario();
    void setNombreUsuario(string);
    void setApellidoUsuario(string);
    void setGenero(string);
    void setEdad(int);
    void setNacionalidad(string);
    void setCumpleaniosUsuario(string);
    void setCorreoUsuario(string);
    void setContrasenaUsuario(string);
};

#endif