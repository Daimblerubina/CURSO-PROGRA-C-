#include <iostream>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Encontrar los valores que se repiten en el arreglo
    int count[5] = {0}; // Inicializar el arreglo de conteo con ceros
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }

    // Imprimir los valores que se repiten en el arreglo
    cout << "Valores que se repiten en el arreglo y su conteo:" << endl;
    for (int i = 0; i < 5; i++) {
        if (count[i] > 1) {
            cout << arr[i] << " se repite " << count[i] << " veces." << endl;
        }
    }

    return 0;
}
