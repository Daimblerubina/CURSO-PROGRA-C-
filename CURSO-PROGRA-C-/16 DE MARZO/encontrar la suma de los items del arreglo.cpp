#include <iostream>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Calcular la suma de los elementos del arreglo
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Imprimir la suma de los elementos del arreglo
    cout << "La suma de los elementos del arreglo es: " << sum << endl;

    return 0;
}
