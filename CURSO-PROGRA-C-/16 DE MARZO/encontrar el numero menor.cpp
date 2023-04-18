#include <iostream>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Encontrar el valor mínimo en el arreglo
    int min = arr[0]; // asumimos que el primer elemento es el mínimo
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Imprimir el valor mínimo encontrado
    cout << "El valor mínimo en el arreglo es: " << min << endl;

    return 0;
}


