#include <iostream>

using namespace std;

class Cuadrilatero {
  private:
    float base;
    float altura;
  
  public:
    // Constructor por defecto
    Cuadrilatero() {
      base = 0.0;
      altura = 0.0;
    }
  
    // Constructor con parámetros
    Cuadrilatero(float b, float h) {
      base = b;
      altura = h;
    }
  
    // Funciones para obtener y establecer la base y la altura
    float getBase() {
      return base;
    }
  
    void setBase(float b) {
      base = b;
    }
  
    float getAltura() {
      return altura;
    }
  
    void setAltura(float h) {
      altura = h;
    }
  
    // Función para calcular el área del cuadrilátero
    float calcularArea() {
      return base * altura;
    }
  
    // Función para calcular el perímetro del cuadrilátero
    float calcularPerimetro() {
      return 2 * (base + altura);
    }
  
    // Función para comprobar si el cuadrilátero es un cuadrado
    bool esCuadrado() {
      return base == altura;
    }
};
