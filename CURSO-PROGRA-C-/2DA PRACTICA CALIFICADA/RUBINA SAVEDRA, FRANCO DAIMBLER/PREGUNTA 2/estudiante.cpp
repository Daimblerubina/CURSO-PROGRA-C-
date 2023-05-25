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
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
};

class Investigador {
protected:
    vector<string> investigaciones;
public:
    void agregarInvestigacion(string investigacion) { investigaciones.push_back(investigacion); }
    void imprimirInvestigaciones() const {
        if (investigaciones.empty()) {
            cout << "El investigador no ha realizado investigaciones." << endl;
        } else {
            cout << "Investigaciones realizadas:" << endl;
            for (const auto& inv : investigaciones) {
                cout << "- " << inv << endl;
            }
        }
    }
};

class Estudiante : public Persona {
protected:
    string facultad;
    int semestre;
public:
    Estudiante(string _nombre, int _edad, string _facultad, int _semestre)
        : Persona(_nombre, _edad), facultad(_facultad), semestre(_semestre) {}
    string getFacultad() const { return facultad; }
    int getSemestre() const { return semestre; }
};

class EstudianteInvestigador : public Estudiante, public Investigador {
public:
    EstudianteInvestigador(string _nombre, int _edad, string _facultad, int _semestre)
        : Estudiante(_nombre, _edad, _facultad, _semestre) {}
};

int main() {
    EstudianteInvestigador est1("Juan Perez", 20, "Ingenieria", 6);
    est1.agregarInvestigacion("Desarrollo de software para sistemas embebidos");
    est1.agregarInvestigacion("Inteligencia artificial aplicada a la salud");

    EstudianteInvestigador est2("Maria Rodriguez", 22, "Ciencias Sociales", 8);
    est2.agregarInvestigacion("Estudio de la percepcion del tiempo en la toma de decisiones");
    est2.agregarInvestigacion("Analisis de la estructura de clases sociales en America Latina");

    vector<EstudianteInvestigador> estudiantes = {est1, est2};

    // Imprimir reporte por estudiante y semestre
    for (int semestre = 1; semestre <= 8; semestre++) {
        cout << "Reporte de investigaciones para el semestre " << semestre << ":" << endl;
        for (auto& estudiante : estudiantes) {
            if (estudiante.getSemestre() == semestre) {
                cout << "Estudiante: " << estudiante.getNombre() << endl;
                cout << "Facultad: " << estudiante.getFacultad() << endl;
                estudiante.imprimirInvestigaciones();
                cout << endl;
            }
        }
    }

    return 0;
}
