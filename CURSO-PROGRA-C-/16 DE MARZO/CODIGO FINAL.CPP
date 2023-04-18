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

    // Encontrar el número mayor y menor
    int mayor = arr[0];
    int menor = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }

    // Encontrar el número que se repite y las veces que se repite
    int repeticiones = 0;
    int numeroRepetido = arr[0];
    for (int i = 0; i < 5; i++) {
        int contador = 1;
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                contador++;
            }
        }
        if (contador > repeticiones) {
            repeticiones = contador;
            numeroRepetido = arr[i];
        }
    }

    // Calcular la suma, el promedio y la mediana
    int suma = 0;
    float promedio;
    float mediana;
    for (int i = 0; i < 5; i++) {
        suma += arr[i];
    }
    promedio = suma / 5.0;
    sort(arr, arr + 5);
    if (5 % 2 == 0) {
        mediana = (arr[5 / 2 - 1] + arr[5 / 2]) / 2.0;
    } else {
        mediana = arr[5 / 2];
    }

    // Ordenar el arreglo de mayor a menor
    sort(arr, arr + 5, greater<int>());

    // Reemplazar la posición media del arreglo por el valor de 25
    int medio = 5 / 2;
    arr[medio] = 25;

    // Imprimir los resultados
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
    cout << "El número que más se repite es: " << numeroRepetido << endl;
    cout << "Se repite " << repeticiones << " veces." << endl;
    cout << "La suma de los elementos del arreglo es: " << suma << endl;
    cout << "El promedio de los elementos del arreglo es: " << promedio << endl;
    cout << "La mediana de los elementos del arreglo es: " << mediana << endl;
    cout << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
