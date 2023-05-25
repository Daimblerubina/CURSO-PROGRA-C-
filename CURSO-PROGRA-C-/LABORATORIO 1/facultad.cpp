#include <iostream>
#include <string.h>
#include "persona.cpp"
#include "facultad.cpp"
#include "curso.cpp"

using namespace std;

class Facultad
{
private:
    string codigo;
    string nombre;
    string sigla;

public:
    // metodos y constructores
    Facultad(string _codigo = "", string _nombre = "", string _sigla = "")
    {
        codigo = _codigo;
        nombre = _nombre;
        sigla = _sigla;
    }

    // getter and setter
    string getCodigo()
    {
        return codigo;
    }
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    string getSigla()
    {
        return sigla;
    }
    void setSigla(string _sigla)
    {
        sigla = _sigla;
    }

    string toString()
    { // toString
        string descripcion = codigo + "  " + nombre + " " + getSigla();
        return descripcion;
    }

    void imprimir()
    {
        cout << codigo << "\t" << nombre << "\t" << sigla << "\n";
    }
};