/*. Escribir un programa que solicite al usuario un arreglo y luego ordene el arreglo de mayor 
a menor y de menor a mayor*/


#include <iostream>
#include <algorithm> // Biblioteca para usar la función sort()
using namespace std;

int main() {
   int n;

   // Solicita al usuario el tamaño del arreglo
   cout << "Ingrese el tamaño del arreglo: ";
   cin >> n;

   int arr[n];

   // Solicita al usuario que ingrese los elementos del arreglo
   for(int i = 0; i < n; i++) {
      cout << "Ingrese el elemento " << i + 1 << ": ";
      cin >> arr[i];
   }

   // Ordena el arreglo de mayor a menor utilizando la función sort()
   sort(arr, arr + n, greater<int>());

   // Imprime el arreglo ordenado de mayor a menor
   cout << "Arreglo ordenado de mayor a menor: ";
   for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   // Ordena el arreglo de menor a mayor utilizando la función sort()
   sort(arr, arr + n);

   // Imprime el arreglo ordenado de menor a mayor
   cout << "Arreglo ordenado de menor a mayor: ";
   for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}