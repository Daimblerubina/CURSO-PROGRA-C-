#include <iostream>
using namespace std;

// Declaración de funciones
int suma_matriz(int matriz_suma[5][4], int fila, int columna);
void imprimir_matriz(int matriz_mostrar[5][4], int filas, int columnas);
void suma_filas(int matriz_suma[5][4], int fila, int columna);
void sumar_columnas(int matriz_suma[5][4], int fila, int columna);

int main()
{
    // Declaración e inicialización de matriz
    int matriz[5][4] = {{2, 3, 4, 5}, {6, 7, 8, 9}, {10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}};

    // Llamada a funciones
    imprimir_matriz(matriz, 5, 4);
    int sum = suma_matriz(matriz, 5, 4);
    cout << "La suma es: " << sum << endl;
    suma_filas(matriz, 5, 4);
    sumar_columnas(matriz, 5, 4);

    return 0;
}

// Función para sumar los elementos de la matriz
int suma_matriz(int matriz_suma[5][4], int fila, int columna)
{
    int suma = 0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma += matriz_suma[i][j];
        }
    }
    return suma;
}

// Función para imprimir la matriz
void imprimir_matriz(int matriz_mostrar[5][4], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "\t" << matriz_mostrar[i][j];
        }
        cout << "\n";
    }
}

// Función para sumar las filas de la matriz
void suma_filas(int matriz_suma[5][4], int fila, int columna)
{
    int sum_fila;
    for (int i = 0; i < fila; i++)
    {
        sum_fila = 0;
        for (int j = 0; j < columna; j++)
        {
            sum_fila += matriz_suma[i][j];
        }
        cout << "La suma de la fila [" << i << "] es: " << sum_fila << endl;
    }
}

// Función para sumar las columnas de la matriz
void sumar_columnas(int matriz_suma[5][4], int fila, int columna)
{
    int sum_columna;
    for (int i = 0; i < columna; i++)
    {
        sum_columna = 0;
        for (int j = 0; j < fila; j++)
        {
            sum_columna += matriz_suma[j][i];
        }
        cout << "La suma de la columna [" << i << "] es: " << sum_columna << endl;
    }
}
