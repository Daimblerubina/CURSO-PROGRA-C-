/*. Escribir un programa que calcule la suma de los números pares e impares de un arreglo 
de enteros.*/


#include <iostream>
using namespace std;

int main() {                             //Aquí se define la función main y se inicializan dos variables enteras, 
   int arr[] = {2, 3, 4, 6, 7, 8, 9, 10}; //tambien agregamos enteros arr con valores predefinidos .
   int sum_pares = 0, sum_impares = 0;    //sum_pares y sum_impares, ambas en cero. 

   for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) { //aqui usamos un bucle for para recorrer cada elemento del arreglo arr
      if(arr[i] % 2 == 0) {                           //Dentro del bucle, se utiliza una instrucción if para comprobar si el elemento actual del arreglo es par o impar
         sum_pares += arr[i];                         //se agrega al sum_pares y si es impar
      }
      else {
         sum_impares += arr[i];                        //se agrega el sum_impares si es impar
      }
   }

   cout << "La suma de los números pares es: " << sum_pares << endl;   //aqui mostramos en pantalla la suma de los pares
   cout << "La suma de los números impares es: " << sum_impares << endl;//aqui mostramos en pantalla la suma de los impares

   return 0;
}