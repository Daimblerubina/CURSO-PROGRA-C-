/* Escriba un programa que solicite al usuario ingresar un número entero positivo y luego 
imprima la secuencia de números 
desde 1 hasta el número ingresado, pero reemplazando los múltiplos de 3 por la palabra 
"Fizz" y los múltiplos de 5 por la palabra "Buzz".
Si el número es múltiplo tanto de 3 como de 5, imprimir "FizzBuzz"*/


#include <iostream>

using namespace std;

int main() {
    int n;
    
    // Pedir al usuario que ingrese un número entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    cout << endl;
    
    // repetir desde 1 hasta el número ingresado
    for (int i = 1; i <= n; i++) {
        // Si el número ingresado es múltiplo de 3 y 5, imprimir "FizzBuzz"
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }
        // Si el número ingresado es múltiplo de 3, imprimir "Fizz"
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        // Si el número ingresado es múltiplo de 5, imprimir "Buzz"
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        // Si el número ingresado no es múltiplo de 3 ni de 5, imprimir el número actual
        else {
            cout << i << endl;
        }
    }
    
    return 0;
}