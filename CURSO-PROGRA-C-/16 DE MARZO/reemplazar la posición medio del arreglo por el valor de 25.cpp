#include <iostream>

using namespace std;

int main() {
    int arr[5];

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Reemplazar la posición media del arreglo por el valor de 25
    int medio = 5 / 2;
    arr[medio] = 25;

    // Imprimir el arreglo modificado
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
