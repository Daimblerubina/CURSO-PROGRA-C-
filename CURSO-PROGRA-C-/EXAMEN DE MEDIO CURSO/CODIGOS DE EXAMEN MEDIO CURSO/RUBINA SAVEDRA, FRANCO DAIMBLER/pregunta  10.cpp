/*Escriba un programa que simule el juego de adivinar un número. El programa deberá 
generar un número aleatorio entre 1 y 100 y pedirle al usuario que adivine cuál es. Si el 
usuario ingresa un número incorrecto, el programa deberá indicarle si el número a adivinar 
es mayor o menor al que ingresó. El juego termina cuando el usuario adivina el número 
correcto*/

#include <iostream>
#include <cstdlib> // linreria para generar números aleatorios
#include <ctime> // sirve para inicializar el inicio del generador de números aleatorios

using namespace std;

int main() {
    srand(time(nullptr)); // Inicializar la semilla del generador de números aleatorios
    const int MIN_NUM = 1; // El número mínimo que puede ser generado
    const int MAX_NUM = 100; // El número máximo que puede ser generado
    int numeroAleatorio = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM; // Generar un número aleatorio entre MIN_NUM y MAX_NUM
    int intentos = 0; // Contador de intentos
    int intentoUsuario; // Número que ingresa el usuario
    
    cout << "Adivina el numero entre " << MIN_NUM << " y " << MAX_NUM << ": ";
    cin >> intentoUsuario;
    intentos++;
    
    while (intentoUsuario != numeroAleatorio) {
        if (intentoUsuario < numeroAleatorio) {
            cout << "El numero a adivinar es mayor." << endl;
        }
        else {
            cout << "El numero a adivinar es menor." << endl;
        }
        cout << "Intenta de nuevo: ";
        cin >> intentoUsuario;
        intentos++;
    }
    
    cout << "Felicidades, adivinaste el numero en " << intentos << " intentos." << endl;
    
    return 0;
}