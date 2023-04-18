#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Ordenar el arreglo en orden ascendente utilizando la función sort de la biblioteca algorithm
    sort(arr, arr + 5);

    // Calcular la mediana
    float mediana;
    if (5 % 2 == 0) {
        mediana = (arr[5 / 2 - 1] + arr[5 / 2]) / 2.0;
    } else {
        mediana = arr[5 / 2];
    }

    // Imprimir la mediana
    cout << "La mediana de los elementos del arreglo es: " << mediana << endl;

    return 0;
}
