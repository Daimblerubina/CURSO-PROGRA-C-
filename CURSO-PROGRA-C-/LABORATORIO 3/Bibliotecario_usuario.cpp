#include <iostream>
#include <string>
#include "persona.cpp"


using namespace std;


class Usuario : Persona 
{
    private:
    string codigo;
    
    public:
        
    Usuario(string _dni, string _apellidos, string _nombres, string _correo, string _telefono, string _direccion, string _codigo) : Persona(_dni,_apellidos,_nombres,_correo,_telefono,_direccion) 
	{
        codigo = _codigo;
    }
	
	void setCodigo(string _codigo)
	{
		codigo = _codigo;
	}
        
    string getCodigo() {
        return codigo;
    }
};


class Bibliotecario :  Persona 
{
    private:
    string codigo;
    
    public:
        
    Bibliotecario(string _dni, string _apellidos, string _nombres, string _correo, string _telefono, string _direccion, string _codigo) : Persona(_dni,_apellidos,_nombres,_correo,_telefono,_direccion) 
	{
        codigo = _codigo;
    }
    
    

    void setCodigo(string _codigo)
    {
    	codigo = _codigo;
	}
	
    string getCodigo() 
	{
        return codigo;
    }
};
