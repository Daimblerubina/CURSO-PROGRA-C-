#include <iostream>
#include <string>

struct Libro {
  std::string titulo;
  std::string autor;
  int anioPublicacion;
};

int main() {
  Libro libros[5];

  // Asignar valores a los libros
  libros[0].titulo = "El principito";
  libros[0].autor = "Antoine de Saint-Exupéry";
  libros[0].anioPublicacion = 1943;

  libros[1].titulo = "Cien años de soledad";
  libros[1].autor = "Gabriel García Márquez";
  libros[1].anioPublicacion = 1967;

  libros[2].titulo = "Don Quijote de la Mancha";
  libros[2].autor = "Miguel de Cervantes";
  libros[2].anioPublicacion = 1605;

  libros[3].titulo = "La metamorfosis";
  libros[3].autor = "Franz Kafka";
  libros[3].anioPublicacion = 1915;

  libros[4].titulo = "1984";
  libros[4].autor = "George Orwell";
  libros[4].anioPublicacion = 1949;

  // Imprimir los valores de los libros
  for (int i = 0; i < 5; i++) {
    std::cout << "Libro " << i + 1 << ": " << libros[i].titulo << " - " << libros[i].autor << " (" << libros[i].anioPublicacion << ")" << std::endl;
  }

  return 0;
}
