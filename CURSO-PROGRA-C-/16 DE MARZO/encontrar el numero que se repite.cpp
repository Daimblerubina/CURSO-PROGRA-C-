#include <iostream>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Encontrar el valor que se repite en el arreglo
    int maxCount = 0;
    int repeatValue = arr[0];
    for (int i = 0; i < 5; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            repeatValue = arr[i];
        }
    }

    // Imprimir el valor que se repite en el arreglo
    if (maxCount > 1) {
        cout << "El valor que se repite en el arreglo es: " << repeatValue << endl;
    } else {
        cout << "No hay valores que se repiten en el arreglo." << endl;
    }

    return 0;
}
