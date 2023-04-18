/*Escribir un programa que encuentre el número mayor, el número menor, el promedio, la 
media , la mediana , cual es el número que se repite más veces de un arreglo de enteros 
de 10 ítems*/

#include <iostream>
#include <algorithm> // para usar sort()
#include <cmath>     // para usar la función de valor absoluto

using namespace std;

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    // pedimos al usuario los valores del arreglo
    cout << "Ingrese los valores del arreglo: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Encontrar el número mayor y el número menor
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Calcular el promedio
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double avg = (double)sum / n;

    // Ordenar el arreglo de menor a mayor
    sort(arr, arr + n);

    // Calcular la mediana
    double median;
    if (n % 2 == 0) {
        median = (double)(arr[n / 2] + arr[n / 2 - 1]) / 2;
    } else {
        median = (double)arr[n / 2];
    }

    // Encontrar el número que se repite más veces
    int mode = arr[0];
    int modeCount = 1;
    int currentCount = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > modeCount) {
                modeCount = currentCount;
                mode = arr[i - 1];
            }
            currentCount = 1;
        }
    }
    if (currentCount > modeCount) {
        modeCount = currentCount;
        mode = arr[n - 1];
    }

    // Imprimir los resultados
    cout << "El numero mayor es: " << max << endl;
    cout << "El numero menor es: " << min << endl;
    cout << "El promedio es: " << avg << endl;
    cout << "La mediana es: " << median << endl;
    cout << "El numero que se repite mas veces es: " << mode << endl;

    return 0;
}

