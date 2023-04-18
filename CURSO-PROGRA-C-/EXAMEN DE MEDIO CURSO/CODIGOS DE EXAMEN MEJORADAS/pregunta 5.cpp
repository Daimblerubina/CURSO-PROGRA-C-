/*. Escriba un programa que simule una calculadora con funciones básicas de suma, resta, 
división y multiplicación, el usuario deberá escoger que operación va a realizar*/


#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacion;

    cout << "CALCULADORA BASICA 10000" << endl;

    // Pedir al usuario que ingrese los dos números y la operación que va hacer
    cout << "Por favor ingrese el primer numero: ";
    cin >> num1;
    cout << "Por favor ingrese el segundo numero: ";
    cin >> num2;
    cout << "Por favor ingrese la operación a realizar (+, -, *, /): ";
    cin >> operacion;

    // Realizar la operación seleccionada y guardar el resultado en la variable "resultado"
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // usa la division por cero como un error
            if (num2 == 0) {
                cout << "¡Error! No se puede dividir por cero." << endl;
                return 1; // Salir del programa con un codigo de error
            } else {
                resultado = num1 / num2;
            }
            break;
        default:
            // Manejar una operacion inavalido como un error
            cout << "¡Error! Operación no válida." << endl;
            return 1; // Salir del programa con un código de error
    }

    // Imprimir el resultado de la operación
    cout << "El resultado de la operación es: " << resultado << endl;

    return 0; // Salir del programa
}