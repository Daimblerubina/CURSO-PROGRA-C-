#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Persona {
protected:
    std::string nombre;
    int edad;
public:
    Persona(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}
};

class Empleado : public Persona {
private:
    std::string puesto;
    double sueldo;
    int antiguedad;
public:
    Empleado(const std::string& nombre, int edad, const std::string& puesto, double sueldo, int antiguedad)
        : Persona(nombre, edad), puesto(puesto), sueldo(sueldo), antiguedad(antiguedad) {}

    std::string getPuesto() const {
        return puesto;
    }

    double getSueldo() const {
        return sueldo;
    }

    int getAntiguedad() const {
        return antiguedad;
    }
    
    std::string getNombre() const {
        return nombre;
    }
    
    int getEdad() const {
        return edad;
    }
};

class Departamento {
private:
    std::string nombre;
    std::string siglas;
    std::vector<Empleado> empleados;
public:
    Departamento(const std::string& nombre, const std::string& siglas) : nombre(nombre), siglas(siglas) {}

    void agregarEmpleado(const Empleado& empleado) {
        empleados.push_back(empleado);
    }

    void generarReporte() const {
        std::ofstream archivo("reporte.txt");
        if (archivo.is_open()) {
            archivo << "Departamento: " << nombre << " (" << siglas << ")\n";
            archivo << "=========================\n";
            archivo << "Empleados:\n\n";
            for (size_t i = 0; i < empleados.size(); i++) {
                const Empleado& empleado = empleados[i];
                archivo << "Empleado " << (i + 1) << ":\n";
                archivo << "Nombre: " << empleado.getNombre() << "\n";
                archivo << "Edad: " << empleado.getEdad() << "\n";
                archivo << "Puesto: " << empleado.getPuesto() << "\n";
                archivo << "Sueldo: " << empleado.getSueldo() << "\n";
                archivo << "Antiguedad: " << empleado.getAntiguedad() << " años\n";
                archivo << "-------------------------\n";
            }
            archivo.close();
            std::cout << "Se ha generado el informe correctamente en el archivo 'reporte.txt'." << std::endl;
} else {
std::cout << "No se pudo abrir el archivo para generar el informe." << std::endl;
}
}
};

int main() {
Departamento departamento("Departamento de Ventas", "DV");

// Crear y agregar empleados al departamento
Empleado empleado1("Juan Pérez", 30, "Vendedor", 2500.0, 5);
Empleado empleado2("María López", 35, "Gerente de Ventas", 5000.0, 8);
// ...

departamento.agregarEmpleado(empleado1);
departamento.agregarEmpleado(empleado2);
// ...

departamento.generarReporte();

return 0;
}

