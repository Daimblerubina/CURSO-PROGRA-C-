#include <iostream>
#include <string>
#include <vector>
#include "persona.cpp"
#include "facultad.cpp"
#include "curso.cpp"

using namespace std;

class Estudiante : Persona
{
private:
    string codigo_estudiante;
    string correo;
    Facultad facultad;
    Curso cursos[5];
    int numCurso = 0;

public:
    // Automovil(int numRuedas, int numPuertas) : Vehiculo(numRuedas), numPuertas_(numPuertas) {}

    Estudiante(string _codigo = "", string _correo = "", string _apellidos = "", string _nombres = "", string _dni = "") : Persona(_apellidos, _nombres, _dni)
    {
        codigo_estudiante = _codigo;
        correo = _correo;
        numCurso = 0;
    }
    // getter an setter
    string getCodigo()
    {
        return codigo_estudiante;
    }
    void setCodigo(string _codigo)
    {
        codigo_estudiante = _codigo;
    }

    string getCorreo()
    {
        return correo;
    }
    void setCorreo(string _correo)
    {
        correo = _correo;
    }
    void getDatos()
    {
        cout << "los datos del estudiante es: " << codigo_estudiante << ": " << getNombres() << ", " << getApellidos() << " " << getDNI();
        cout << "\n";
    }

    Facultad getFacultad()
    {
        return facultad;
    }
    void setFacultad(Facultad _facultad)
    {
        facultad = _facultad;
    }

    // metodos para agregar curso
    void agregarCurso(Curso curso)
    {
        if (numCurso < 5)
        {
            cursos[numCurso] = curso;
            numCurso++;
        }
        else
        {
            cout << "El estudiante completo el numero de cursos";
            cout << "\n";
        }
    }
    void mostrarCursos()
    {
        cout << "Cursos del estudiante :" << getApellidos() << " " << getNombres();
        cout << "\n";
        if (sizeof(cursos) / sizeof(cursos[0]) != 0)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << " .- " << cursos[i].toString() << "\n";
            }
        }
        else
        {
            cout << "No se registraron cursos para el estudiante ...........";
            cout << "\n";
        }
    }

    void ingresarNotas()
    {
        cout << "Ingresando las notas del estudiante: " << getApellidos() << " " << getNombres() << "\n";
        float nota1 = 0, nota2 = 0, nota3 = 0;
        if (sizeof(cursos) / sizeof(cursos[0]) != 0)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "--------------------------------";
                cout << "\n";
                cout << cursos[i].getCodigo() << "---" << cursos[i].getDescripcion();
                cout << "\n";
                cout << "--------------------------------";
                cout << "\n";
                nota1 = 0;
                nota2 = 0;
                nota3 = 0;
                cout << "Ingrese la nota 1 :";
                cin >> nota1;
                cout << "\n";
                cout << "Ingrese la nota 2 :";
                cin >> nota2;
                cout << "\n";
                cout << "Ingrese la nota 3:";
                cin >> nota3;
                cout << "\n";
                cursos[i].setNota1(nota1);
                cursos[i].setNota2(nota2);
                cursos[i].setNota3(nota3);
                cout << "\n";
            }
        }
        else
        {
            cout << "No se registraron cursos para el estudiante ...........";
        }
    }
};