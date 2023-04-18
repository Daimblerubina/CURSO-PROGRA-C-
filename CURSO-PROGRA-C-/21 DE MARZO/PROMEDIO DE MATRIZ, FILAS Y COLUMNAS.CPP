#include <iostream>

using namespace std;

// Función para imprimir matriz en pantalla
void imprimir_matriz(int matriz_mostrar[5][4], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "\t" << matriz_mostrar[i][j];
        }
        cout << "\n";
    }
}

// Función para sumar todos los elementos de la matriz
int suma_matriz(int matriz_suma[5][4], int fila, int columna) {
    int suma = 0;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            suma += matriz_suma[i][j];
        }
    }
    return suma;
}

// Función para calcular el promedio de la matriz
float promedio_matriz(int matriz[5][4], int filas, int columnas) {
    int suma = suma_matriz(matriz, filas, columnas);
    return (float)suma / (filas * columnas);
}

// Función para sumar los elementos de cada fila de la matriz e imprimir el resultado
void suma_filas(int matriz_suma[5][4], int fila, int columna) {
    int sum_fila;
    for (int i = 0; i < fila; i++) {
        sum_fila = 0;
        for (int j = 0; j < columna; j++) {
            sum_fila += matriz_suma[i][j];
        }
        cout << "La suma de la fila [" << i << "] es: " << sum_fila << "\n";
    }
}

// Función para calcular el promedio de los elementos de cada fila de la matriz
void promedio_filas(int matriz[5][4], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        int sum_fila = 0;
        for (int j = 0; j < columnas; j++) {
            sum_fila += matriz[i][j];
        }
        float promedio = (float)sum_fila / columnas;
        cout << "El promedio de la fila [" << i << "] es: " << promedio << "\n";
    }
}

// Función para sumar los elementos de cada columna de la matriz e imprimir el resultado
void sumar_columnas(int matriz_suma[5][4], int fila, int columna) {
    int sum_columna;
    for (int i = 0; i < columna; i++) {
        sum_columna = 0;
        for (int j = 0; j < fila; j++) {
            sum_columna += matriz_suma[j][i];
        }
        cout << "La suma de la columna [" << i << "] es: " << sum_columna << "\n";
    }
}

// Función para calcular el promedio de los elementos de cada columna de la matriz
void promedio_columnas(int matriz[5][4], int filas, int columnas) {
    for (int i = 0; i < columnas; i++) {
        int sum_columna = 0;
        for (int j = 0; j < filas; j++) {
            sum_columna += matriz[j][i];
        }
        float promedio = (float)sum_columna / filas; / columnas;
cout << "El promedio de la columna [" << i << "] es: " << promedio << "\n";
}
}

int main() {
// Matriz de prueba
int matriz[5][4] = {{5, 8, 2, 4},
{1, 6, 3, 2},
{9, 7, 6, 1},
{3, 5, 8, 7},
{2, 4, 9, 3}};
// Imprimir matriz en pantalla
cout << "La matriz es:\n";
imprimir_matriz(matriz, 5, 4);

// Calcular y mostrar el promedio de la matriz
float promedio = promedio_matriz(matriz, 5, 4);
cout << "\nEl promedio de la matriz es: " << promedio << "\n\n";

// Sumar los elementos de cada fila de la matriz e imprimir el resultado
suma_filas(matriz, 5, 4);

// Calcular y mostrar el promedio de los elementos de cada fila de la matriz
promedio_filas(matriz, 5, 4);

// Sumar los elementos de cada columna de la matriz e imprimir el resultado
sumar_columnas(matriz, 5, 4);

// Calcular y mostrar el promedio de los elementos de cada columna de la matriz
promedio_columnas(matriz, 5, 4);

return 0;
     }  
