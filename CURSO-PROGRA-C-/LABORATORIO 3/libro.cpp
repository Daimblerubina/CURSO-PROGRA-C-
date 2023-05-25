#include <iostream>
#include <string>

using namespace std;

class Libro 
{
    private:
    string codigo;
    string titulo;
    string categoria;
    string autor;
    bool prestamo;
    
    public:
   
   
    Liro (string _codigo, string _titulo, string _categoria, string _autor) 
	{
        codigo = _codigo;
        titulo = _titulo;
        categoria = _categoria;
        autor = _autor;
        prestamo = false;
    }

	
	void setPrestamo(bool _prestamo)
	{
		prestamo = _prestamo;
	}
	
	void setCodigo(string _codigo)
	{
		codigo = _codigo;
	}
	
	void setTitulo(string _titulo)
	{
		titulo = _titulo;
	}
	
	void setCategoria(string _categoria)
	{
		categoria = _categoria;
	}
	
	void setAutor(string _autor)
	{
		autor = _autor;
	}
	
    string getCodigo() 
	{
        return codigo;
    }

    string getTitulo() 
	{
        return titulo;
    }

    string getCategoria() 
	{
        return categoria;
    }

    string getAutor() 
	{
        return autor;
    }
    
    string getData()
    {
    	return "Codigo: "+codigo+"\nTitulo: "+titulo+"\nCategoria: "+categoria+"\nAutor: "+autor+"\n";
	}
};

