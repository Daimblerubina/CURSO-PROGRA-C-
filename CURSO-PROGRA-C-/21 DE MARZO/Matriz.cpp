	#incluir <iostream>
using namespace std;

// declaramos funciones
// void suma_matriz(int matriz[5][4],int filas, int columnas);
//  funcion sumatoria
int suma_matriz(int matriz_suma[5][4], int fila, int columna)
{
    int suma = 0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma += matriz_suma[i][j]; // suma = suma + matriz_suma[i][j];
        }
    }
    return suma;
}
// funcion para mostrar matriz
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
// funcion para sumar las filas
void suma_filas(int matriz_suma[5][4], int fila, int columna)
{
    int sum_fila;
    for (int i = 0; i < fila; i++)
    {
        sum_fila = 0;
        for (int j = 0; j < columna; j++)
        {
            sum_fila += matriz_suma[i][j]; // suma = suma + matriz_suma[i][j];
        }
        cout << "la suma de la fila [" << i << "] es :" << sum_fila << "\n";
    }
    // return sum_fila;
}
// funcion para sumas columnas
void sumar_columnas(int matriz_suma[5][4], int fila, int columna)
{
    int sum_columna;
    for (int i = 0; i < columna; i++)
    {
        sum_columna = 0;
        for (int j = 0; j < fila; j++)
        {
            sum_columna += matriz_suma[j][i]; // suma = suma + matriz_suma[i][j];
            // cout << matriz_suma[j][i] << "\n";
        }
        // cout << ".....";
        cout << "la suma de la columna [" << i << "] es :" << sum_columna << "\n";
    }
}

// funcion principal del proyecto
int main()
{
    // declaramos una matriz de 5*4

    int matriz[5][4] = {{2, 3, 4, 5}, {6, 7, 8, 9}, {10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}};

    cout << matriz[2][4];
    cout << "\n";
    cout << matriz[3][0];
    cout << "\n";
    cout << matriz[5][4] << "\n";

    imprimir_matriz(matriz, 5, 4);
    int sum = suma_matriz(matriz, 5, 4);
    cout << "la suma es:" << sum;
    cout << "\n";
    suma_filas(matriz, 5, 4);
    cout << "\n";
    sumar_columnas(matriz, 5, 4);
    return 0;
}
