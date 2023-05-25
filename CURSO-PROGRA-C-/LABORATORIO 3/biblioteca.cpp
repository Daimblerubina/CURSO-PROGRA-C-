#include <iostream>
#include <string>
#include "libro.cpp"
#include "Bibliotecario_usuario.cpp"

using namespace std;

class Biblioteca 
{
    private:
    string codigo;
    string nombre;
    string direccion;
    string telefono;
    Libro libros[5];
    
    public:
    
    Biblioteca(string _codigo, string _nombre, string _direccion, string _telefono) 
	{
        codigo = _codigo;
        nombre = _nombre;
        direccion = _direccion;
        telefono = _telefono;
    }
	
	
    void prestarLibro(Usuario usuario, Libro libro)
	{
		
    	if (libro.getPrestado()) 
		{
        	cout << "El libro ya ha sido prestado" << endl;
    	}
    	else 
		{
        	libro.setPrestado(true);
        	cout << "El libro " << libro.getTitulo() << " ha sido prestado a " << usuario.getNombres() << " " << usuario.getApellidos() << endl;
    	} 
	  
	}
	
	void registrarLibro(Libro libro) 
    {
        libros.push_back(libro); 
        cout << "El libro " << libro.getTitulo() << " ha sido registrado en la biblioteca" << endl;
    }
    
    void imprimirDatos() 
	{
    	cout << "Código: " << codigo << endl;
    	cout << "Nombre: " << nombre << endl;
    	cout << "Dirección: " << direccion << endl;
    	cout << "Teléfono: " << telefono << endl;
	}
	
    void setCodigo(string _codigo)
    {
    	codigo = _codigo;
	}
	
	void setNombre(string _nombre)
	{
		nombre = _nombre;
	}
	
	void setDireccion(string _direccion)
	{
		direccion = _direccion;
	}
	
	void setTelefono(string _telefono)
	{
		telefono = _telefono;
	}
	
    string getCodigo() 
	{
        return codigo;
    }

    string getNombre() 
	{
        return nombre;
    }

    string getDireccion() 
	{
        return direccion;
    }

    string getTelefono() 
	{
        return telefono;
    }
};

