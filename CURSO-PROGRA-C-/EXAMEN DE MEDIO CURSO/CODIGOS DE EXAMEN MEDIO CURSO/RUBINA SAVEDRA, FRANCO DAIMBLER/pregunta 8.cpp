/*escriba un programa que solicite el ingreso de 3 notas al usuario, y luego que calcule el 
promedio de las notas*/



#include <iostream>
using namespace std;

int main() {
   float nota1, nota2, nota3, promedio;

   // aqui solicitas los datos para ingresar las notas 
   cout << "Ingrese la primera nota: ";
   cin >> nota1;

   cout << "Ingrese la segunda nota: ";
   cin >> nota2;

   cout << "Ingrese la tercera nota: ";
   cin >> nota3;

   // Calcular promedio
   promedio = (nota1 + nota2 + nota3) / 3;

   // Mostrar en pantalla el resultado
   cout << "El promedio de las notas ingresadas es: " << promedio << endl;

   return 0;
}
