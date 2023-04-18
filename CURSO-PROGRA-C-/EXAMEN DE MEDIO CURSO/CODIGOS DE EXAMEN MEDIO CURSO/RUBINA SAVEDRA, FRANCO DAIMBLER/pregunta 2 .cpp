/*Escribir un programa para calcule el área de un triángulo, el perímetro de un triangulo*/


#include <iostream>
#include <cmath> // Biblioteca para usar la funciónes matematicas
using namespace std;

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

   // Calcula el perímetro del triángulo sumando las longitudes de los tres lados
   perimetro = a + b + c;

   // Calcula el semiperímetro del triángulo
   float s = perimetro / 2;

   // Calcula el área del triángulo utilizando la formula correspondiente
   area = sqrt(s * (s - a) * (s - b) * (s - c));

   // Imprime los valores calculados de área y perímetro en la consola
   cout << "El perimetro del triangulo es: " << perimetro << endl;
   cout << "El area del triangulo es: " << area << endl;

   return 0;
}