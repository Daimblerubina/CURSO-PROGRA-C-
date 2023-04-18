/*Escribir un programa para calcule el área de un triángulo, el perímetro de un triangulo*/


#include <iostream>
#include <cmath>
using namespace std;

// Función para calcular el perímetro del triángulo
float calcularPerimetro(float lado1, float lado2, float lado3) {
   float perimetro = lado1 + lado2 + lado3;
   return perimetro;
}

// Función para calcular el área del triángulo
float calcularArea(float lado1, float lado2, float lado3) {
   float s = calcularPerimetro(lado1, lado2, lado3) / 2;
   float area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
   return area;
}

int main() {
   float a, b, c;
   float area, perimetro;

   // Solicita al usuario que ingrese los valores de los tres lados del triángulo
   cout << "Ingrese el numero del primer lado del triangulo: ";
   cin >> a;
   cout << "Ingrese el numero del segundo lado del triangulo: ";
   cin >> b;
   cout << "Ingrese el numero del tercer lado del triangulo: ";
   cin >> c;

   // Calcula el perímetro del triángulo usando la función calcularPerimetro
   perimetro = calcularPerimetro(a, b, c);

   // Calcula el área del triángulo utilizando la función calcularArea
   area = calcularArea(a, b, c);

   // Imprime los valores calculados de área y perímetro en la consola
   cout << "El perimetro del triangulo es: " << perimetro << endl;
   cout << "El area del triangulo es: " << area << endl;

   return 0;
}
