#include <iostream>
#include <string>

struct Libro {
  std::string titulo;
  std::string autor;
  int anioPublicacion;
};

int main() {
  Libro libros[5];

  // Recorrido para ingresar los libros
  for (int i = 0; i < 5; i++) {
    std::cout << "Ingresa el título del libro " << i + 1 << ": ";
    std::getline(std::cin, libros[i].titulo);

    std::cout << "Ingresa el autor del libro " << i + 1 << ": ";
    std::getline(std::cin, libros[i].autor);

    std::cout << "Ingresa el año de publicación del libro " << i + 1 << ": ";
    std::cin >> libros[i].anioPublicacion;
    std::cin.ignore(); // Ignorar el salto de línea que queda en el buffer después de leer el número
  }

  // Imprimir los valores de los libros
  for (int i = 0; i < 5; i++) {
    std::cout << "Libro " << i + 1 << ": " << libros[i].titulo << " - " << libros[i].autor << " (" << libros[i].anioPublicacion << ")" << std::endl;
  }

  return 0;
}
