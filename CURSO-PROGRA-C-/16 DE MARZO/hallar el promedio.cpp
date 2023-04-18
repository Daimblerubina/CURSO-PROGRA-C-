#include <iostream>

using namespace std;

int main() {
    int arr[5];
    float suma = 0, promedio;

    // Pedir al usuario que ingrese los valores del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor del elemento " << i << ": ";
        cin >> arr[i];
    }

    // Calcular la suma de los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        suma += arr[i];
    }

    // Calcular el promedio de los elementos del arreglo
    promedio = suma / 5;

    // Imprimir el promedio
    cout << "El promedio de los elementos del arreglo es: " << promedio << endl;

    return 0;
}
