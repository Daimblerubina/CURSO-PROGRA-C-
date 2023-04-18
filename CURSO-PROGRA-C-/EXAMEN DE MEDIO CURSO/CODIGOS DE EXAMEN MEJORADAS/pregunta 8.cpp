/*escriba un programa que solicite el ingreso de 3 notas al usuario, y luego que calcule el 
promedio de las notas*/



#include <iostream>
using namespace std;

// Función para solicitar una nota al usuario
float solicitarNota(int numNota) {
    float nota;
    cout << "Ingrese la nota " << numNota << ": ";
    cin >> nota;
    return nota;
}

// Función para calcular el promedio de tres notas
float calcularPromedio(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

// Función para imprimir el resultado del promedio
void imprimirPromedio(float promedio) {
    cout << "El promedio de las notas ingresadas es: " << promedio << endl;
}

int main() {
    float nota1, nota2, nota3, promedio;

    // Solicitar las notas al usuario utilizando la función solicitarNota
    nota1 = solicitarNota(1);
    nota2 = solicitarNota(2);
    nota3 = solicitarNota(3);

    // Calcular el promedio utilizando la función calcularPromedio
    promedio = calcularPromedio(nota1, nota2, nota3);

    // Imprimir el resultado utilizando la función imprimirPromedio
    imprimirPromedio(promedio);

    return 0;
}
