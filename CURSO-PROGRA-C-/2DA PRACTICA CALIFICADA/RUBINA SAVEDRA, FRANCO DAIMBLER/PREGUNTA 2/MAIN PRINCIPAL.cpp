#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    Persona(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}
    virtual void imprimir() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

class Investigador {
protected:
    vector<string> investigaciones;
public:
    void agregarInvestigacion(string investigacion) {
        investigaciones.push_back(investigacion);
    }
    virtual void imprimirInvestigaciones() const {
        cout << "Investigaciones realizadas:" << endl;
        for (auto& investigacion : investigaciones) {
            cout << "- " << investigacion << endl;
        }
    }
};

class EstudianteInvestigador : public Persona, public Investigador {
protected:
    string facultad;
    int semestre;
public:
    EstudianteInvestigador(string _nombre, int _edad, string _facultad, int _semestre)
        : Persona(_nombre, _edad), facultad(_facultad), semestre(_semestre) {}
    void imprimir() const override {
        Persona::imprimir();
        cout << "Facultad: " << facultad << endl;
        cout << "Semestre: " << semestre << endl;
        Investigador::imprimirInvestigaciones();
        cout << endl;
    }
};

int main() {
    EstudianteInvestigador est1("Juan Perez", 20, "Ingenieria", 6);
    est1.agregarInvestigacion("Desarrollo de software para sistemas embebidos");
    est1.agregarInvestigacion("Inteligencia artificial aplicada a la salud");
    est1.imprimir();

    EstudianteInvestigador est2("Maria Rodriguez", 22, "Ciencias Sociales", 8);
    est2.agregarInvestigacion("Estudio de la percepcion del tiempo en la toma de decisiones");
    est2.agregarInvestigacion("Analisis de la estructura de clases sociales en America Latina");
    est2.imprimir();

    return 0;
}
