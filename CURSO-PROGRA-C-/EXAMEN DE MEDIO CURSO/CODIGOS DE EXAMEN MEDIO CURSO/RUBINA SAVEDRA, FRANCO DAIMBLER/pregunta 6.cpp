/*6. Escribir un programa que lea una lista de palabras y las ordene alfabéticamente.
*/

#include <iostream>  
#include <string>    
#include <algorithm> 
using namespace std;

int main() {
    int n;  // declara una variable entera para almacenar la cantidad de palabras
    cout << "Ingrese la cantidad de palabras a ordenar: "; // pide al usuario que ingrese la cantidad de palabras
    cin >> n;  // lee la cantidad de palabras desde la entrada estándar y la almacena en la variable n

    string palabras[n];  // declara un arreglo de n cadenas de caracteres para almacenar las palabras
    cout << "Ingrese las palabras a ordenar separadas por espacios: ";  // pide al usuario que ingrese las palabras
    for (int i = 0; i < n; i++) {  // recorre el arreglo palabras desde el primer elemento hasta el último
        cin >> palabras[i];  // lee la palabra i- desde la entrada estándar y la almacena en el arreglo palabras
    }

    sort(palabras, palabras + n);  // ordena las palabras alfabéticamente utilizando la función sort de la biblioteca de algoritmos

    cout << "Las palabras ordenadas alfabéticamente son: ";  // imprime un mensaje indicando que se mostrarán las palabras ordenadas
    for (int i = 0; i < n; i++) {  // recorre el arreglo palabras desde el primer elemento hasta el último
        cout << palabras[i] << " ";  // imprime la palabra i seguida de un espacio en blanco
    }

    return 0;  // el programa finaliza
}
