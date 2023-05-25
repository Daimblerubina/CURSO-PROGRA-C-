// curso
#include <iostream>
#include <string.h>

using namespace std;

class Curso
{
private:
    string codigo;
    string descripcion;
    int credito;
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;

    // metodos y funciones
public:
    Curso(string _codigo = "", string _descripcion = "", int _credito = 0)
    {
        codigo = _codigo;
        descripcion = _descripcion;
        credito = _credito;
    }
    //~Curso();
    // getter (obteber) and setter (actualizar)
    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getDescripcion()
    {
        return descripcion;
    }

    void setDescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }
    int getCredito()
    {
        return credito;
    }
    void setCredito(int _credito)
    {
        credito = _credito;
    }
    float getNota1()
    {
        return nota1;
    }
    void setNota1(float _nota1)
    {
        nota1 = _nota1;
    }
    float getNota2()
    {
        return nota1;
    }
    void setNota2(float _nota2)
    {
        nota2 = _nota2;
    }
    float getNota3()
    {
        return nota3;
    }
    void setNota3(float _nota3)
    {
        nota3 = _nota3;
    }

    float promedio()
    {
        float pr = 0;
        pr = (nota1 + nota2 + nota3) / 3;
        return pr;
    }

    string toString()
    {
        float pr = promedio();
        string resumen = "Curso: " + descripcion + " --> Credito:  " + to_string(credito) + " --> Promedio: " + to_string(pr);
        return resumen;
    }
};
