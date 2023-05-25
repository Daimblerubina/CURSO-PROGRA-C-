#include <iostream>
#include <string>

#include "biblioteca.cpp"
#include "Bibliotecario_usuario.cpp"

int main(){
	
	Biblioteca miBiblioteca("001", "Biblioteca Central", "Calle 1, Ciudad", "12345678");
	miBiblioteca.imprimirDatos(); // Imprime los datos de la biblioteca
	
	
	
	return 0;
}

