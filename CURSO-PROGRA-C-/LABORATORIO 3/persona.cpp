#include <iostream>
#include <string>

using namespace std;

class Persona 
{
    private:
    string dni;
    string apellidos;
    string nombres;
    string correo;
    string telefono;
    string direccion;
    
    public:
        
    Persona(string _dni, string _apellidos, string _nombres, string _correo, string _telefono, string _direccion)
	{
        dni = _dni;
        apellidos = _apellidos;
        nombres = _nombres;
        correo = _correo;
        telefono = _telefono;
        direccion = _direccion;
    }

    void setDni(string _dni)
	{
		dni = _dni;
	} 
	
	void setApellidos(string _apellidos)
	{
		apellidos = _apellidos;
	}
	
	void setNombres(string _nombres)
	{
		nombres = _nombres;
	}
	
	void setCorreo(string _correo)
	{
		correo = _correo;
	}
	
	void setTelefono(string _telefono)
	{
		telefono = _telefono;
	}
	
	void setDireccion(string _direccion)
	{
		direccion = _direccion;
	}
	
    string getDni() {
        return dni;
    }

    string getApellidos() {
        return apellidos;
    }

    string getNombres() {
        return nombres;
    }

    string getCorreo() {
        return correo;
    }

    string getTelefono() {
        return telefono;
    }

    string getDireccion() {
        return direccion;
    }
};












