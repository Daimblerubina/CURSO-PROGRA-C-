#include <iostream>
#include <string>

using namespace std;

// Clase Profesor
class Profesor {
  private:
    string nombre;
    string dni;
    string facultad;
  
  public:
    // Constructor
    Profesor(string _nombre, string _dni, string _facultad) {
        nombre = _nombre;
        dni = _dni;
        facultad = _facultad;
    }

    // Getters y Setters
    string getNombre() { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }
    
    string getDni() { return dni; }
    void setDni(string _dni) { dni = _dni; }
    
    string getFacultad() { return facultad; }
    void setFacultad(string _facultad) { facultad = _facultad; }
    
    // Método para mostrar información
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "DNI: " << dni << endl;
        cout << "Facultad: " << facultad << endl;
    }
};

// Clase Investigador
class Investigador {
  private:
    int codigo;
    string especialidad;
    int librosPublicados;
  
  public:
    // Constructor
    Investigador(int _codigo, string _especialidad, int _librosPublicados) {
        codigo = _codigo;
        especialidad = _especialidad;
        librosPublicados = _librosPublicados;
    }

    // Getters y Setters
    int getCodigo() { return codigo; }
    void setCodigo(int _codigo) { codigo = _codigo; }
    
    string getEspecialidad() { return especialidad; }
    void setEspecialidad(string _especialidad) { especialidad = _especialidad; }
    
    int getLibrosPublicados() { return librosPublicados; }
    void setLibrosPublicados(int _librosPublicados) { librosPublicados = _librosPublicados; }
    
    // Método para mostrar información
    void mostrarInfo() {
        cout << "Codigo: " << codigo << endl;
        cout << "Especialidad: " << especialidad << endl;
        cout << "Libros Publicados: " << librosPublicados << endl;
    }
};

// Clase Docente que hereda de Profesor e Investigador
class Docente : public Profesor, public Investigador {
  public:
    // Constructor
    Docente(string _nombre, string _dni, string _facultad, int _codigo, string _especialidad, int _librosPublicados)
      : Profesor(_nombre, _dni, _facultad), Investigador(_codigo, _especialidad, _librosPublicados) {}
    
    // Método para mostrar información
    void mostrarInfo() {
        Profesor::mostrarInfo();
        Investigador::mostrarInfo();
    }
};

int main() {
    // Creamos objetos de Profesor
    Profesor profesor1("Juan Perez", "12345678", "Facultad de Ingenieria");
    Profesor profesor2("Maria Lopez", "87654321", "Facultad de Ciencias Sociales");
    Profesor profesor3("Luis Gonzalez", "45678912", "Facultad de Medicina");
Profesor profesor4("Ana Garcia", "78912345", "Facultad de Derecho");
Profesor profesor5("Pedro Martinez", "34567891", "Facultad de Arquitectura");
Profesor profesor6("Lucia Rodriguez", "89123456", "Facultad de Ciencias Economicas");

// Creamos objetos de Investigador
Investigador investigador1(101, "Fisica", 5);
Investigador investigador2(102, "Quimica", 10);
Investigador investigador3(103, "Biologia", 7);
Investigador investigador4(104, "Matematicas", 3);
Investigador investigador5(105, "Geologia", 6);

// Creamos objetos de Docente
Docente docente1("Juan Perez", "12345678", "Facultad de Ingenieria", 101, "Fisica", 5);
Docente docente2("Maria Lopez", "87654321", "Facultad de Ciencias Sociales", 102, "Quimica", 10);
Docente docente3("Luis Gonzalez", "45678912", "Facultad de Medicina", 103, "Biologia", 7);
Docente docente4("Ana Garcia", "78912345", "Facultad de Derecho", 104, "Matematicas", 3);
Docente docente5("Pedro Martinez", "34567891", "Facultad de Arquitectura", 105, "Geologia", 6);

// Mostramos información de los objetos creados
cout << "Informacion de los profesores: " << endl;
profesor1.mostrarInfo();
cout << endl;
profesor2.mostrarInfo();
cout << endl;
profesor3.mostrarInfo();
cout << endl;
profesor4.mostrarInfo();
cout << endl;
profesor5.mostrarInfo();
cout << endl;
profesor6.mostrarInfo();
cout << endl;

cout << "Informacion de los investigadores: " << endl;
investigador1.mostrarInfo();
cout << endl;
investigador2.mostrarInfo();
cout << endl;
investigador3.mostrarInfo();
cout << endl;
investigador4.mostrarInfo();
cout << endl;
investigador5.mostrarInfo();
cout << endl;

cout << "Informacion de los docentes: " << endl;
docente1.mostrarInfo();
cout << endl;
docente2.mostrarInfo();
cout << endl;
docente3.mostrarInfo();
cout << endl;
docente4.mostrarInfo();
cout << endl;
docente5.mostrarInfo();
cout << endl;




return 0;

}

