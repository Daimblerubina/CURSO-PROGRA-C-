#include <iostream>

using namespace std;

void imprimir_matriz(int matriz_mostrar[5][5], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "\t" << matriz_mostrar[i][j];
        }
        cout << "\n";
    }
}

void invertir_matriz(int matriz_invertir[5][5], int filas, int columnas) {
    // Paso 1: transponer la matriz
    int matriz_transpuesta[5][5];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz_transpuesta[i][j] = matriz_invertir[j][i];
        }
    }
    // Paso 2: invertir cada fila de la matriz transpuesta
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas / 2; j++) {
            int temp = matriz_transpuesta[i][j];
            matriz_transpuesta[i][j] = matriz_transpuesta[i][columnas - 1 - j];
            matriz_transpuesta[i][columnas - 1 - j] = temp;
        }
    }
    imprimir_matriz(matriz_transpuesta, filas, columnas);
}

int main() {
    int matriz[5][5] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};
    int filas = 5, columnas = 5;
    cout << "Matriz original:\n";
    imprimir_matriz(matriz, filas, columnas);
    cout << "\nMatriz invertida:\n";
    invertir_matriz(matriz, filas, columnas);
    return 0;
}
