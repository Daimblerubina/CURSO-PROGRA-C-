/*6. Escribir un programa que lea una lista de palabras y las ordene alfabéticamente.
*/

#include <iostream>
#include <string>
#include <algorithm>

// Función que pide al usuario la cantidad de palabras a ordenar y la devuelve
int pedirCantidadPalabras() {
    int n;
    std::cout << "Ingrese la cantidad de palabras a ordenar: ";
    std::cin >> n;
    return n;
}

// Función que pide al usuario las palabras a ordenar y las devuelve en un arreglo
std::string* pedirPalabras(int n) {
    std::string* palabras = new std::string[n];
    std::cout << "Ingrese las palabras a ordenar separadas por espacios: ";
    for (int i = 0; i < n; i++) {
        std::cin >> palabras[i];
    }
    return palabras;
}

// Función que ordena un arreglo de palabras alfabéticamente
void ordenarPalabras(std::string* palabras, int n) {
    std::sort(palabras, palabras + n);
}

// Función que imprime las palabras ordenadas
void imprimirPalabras(std::string* palabras, int n) {
    std::cout << "Las palabras ordenadas alfabéticamente son: ";
    for (int i = 0; i < n; i++) {
        std::cout << palabras[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n = pedirCantidadPalabras(); // Pide al usuario la cantidad de palabras a ordenar
    std::string* palabras = pedirPalabras(n); // Pide al usuario las palabras a ordenar y las almacena en un arreglo
    ordenarPalabras(palabras, n); // Ordena las palabras alfabéticamente
    imprimirPalabras(palabras, n); // Imprime las palabras ordenadas
    delete[] palabras; // Libera la memoria utilizada por el arreglo de palabras
    return 0;
}

