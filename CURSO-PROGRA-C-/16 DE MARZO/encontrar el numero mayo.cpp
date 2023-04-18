#include <iostream>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Encontrar el valor máximo en el arreglo
    int max = arr[0]; // asumimos que el primer elemento es el máximo
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Imprimir el valor máximo encontrado
    cout << "El valor máximo en el arreglo es: " << max << endl;

    return 0;
}
