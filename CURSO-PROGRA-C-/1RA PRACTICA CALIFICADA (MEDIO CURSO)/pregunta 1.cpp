/*. Escribir un programa que calcule la suma de los números pares e impares de un arreglo 
de enteros.*/


#include <iostream>
using namespace std;

int sumarPares(int arr[], int tam) {  //Función que recibe un arreglo y su tamaño y devuelve la suma de los números pares en el arreglo.
   int sum_pares = 0;
   for(int i = 0; i < tam; i++) {
      if(arr[i] % 2 == 0) {
         sum_pares += arr[i];
      }
   }
   return sum_pares;
}

int sumarImpares(int arr[], int tam) {  //Función que recibe un arreglo y su tamaño y devuelve la suma de los números impares en el arreglo.
   int sum_impares = 0;
   for(int i = 0; i < tam; i++) {
      if(arr[i] % 2 != 0) {
         sum_impares += arr[i];
      }
   }
   return sum_impares;
}

int main() {
   int arr[] = {2, 3, 4, 6, 7, 8, 9, 10};
   int tam = sizeof(arr)/sizeof(arr[0]);   //Obtenemos el tamaño del arreglo utilizando sizeof.
   
   int sum_pares = sumarPares(arr, tam);   //Llamamos a la función sumarPares y almacenamos su resultado en la variable sum_pares.
   int sum_impares = sumarImpares(arr, tam);  //Llamamos a la función sumarImpares y almacenamos su resultado en la variable sum_impares.

   cout << "La suma de los números pares es: " << sum_pares << endl;
   cout << "La suma de los números impares es: " << sum_impares << endl;

   return 0;
}