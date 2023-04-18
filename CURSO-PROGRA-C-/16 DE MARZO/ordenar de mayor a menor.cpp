#include <iostream>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Ordenar el arreglo en orden ascendente utilizando el método de burbuja
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Imprimir el arreglo ordenado en orden ascendente
    cout << "Arreglo ordenado en orden ascendente: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
