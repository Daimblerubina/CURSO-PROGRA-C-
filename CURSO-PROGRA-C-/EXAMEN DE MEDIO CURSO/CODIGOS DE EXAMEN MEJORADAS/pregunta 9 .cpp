/* Escriba un programa que solicite al usuario ingresar un número entero positivo y luego 
imprima la secuencia de números 
desde 1 hasta el número ingresado, pero reemplazando los múltiplos de 3 por la palabra 
"Fizz" y los múltiplos de 5 por la palabra "Buzz".
Si el número es múltiplo tanto de 3 como de 5, imprimir "FizzBuzz"*/


#include <iostream>
using namespace std;

// Función que imprime la secuencia de números desde 1 hasta el número ingresado
void imprimirSecuencia(int num) {
    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {  // Si es múltiplo de 3 y 5, imprimir "FizzBuzz"
            cout << "FizzBuzz ";
        } else if (i % 3 == 0) {  // Si es múltiplo de 3, imprimir "Fizz"
            cout << "Fizz ";
        } else if (i % 5 == 0) {  // Si es múltiplo de 5, imprimir "Buzz"
            cout << "Buzz ";
        } else {  // Si no es múltiplo ni de 3 ni de 5, imprimir el número
            cout << i << " ";
        }
    }
}

int main() {
    int num;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    // Verificar que el número ingresado sea positivo
    if (num <= 0) {
        cout << "El numero ingresado debe ser positivo." << endl;
        return 1;  // Salir del programa con un código de error
    }

    imprimirSecuencia(num);

    return 0;  // Salir del programa
}
