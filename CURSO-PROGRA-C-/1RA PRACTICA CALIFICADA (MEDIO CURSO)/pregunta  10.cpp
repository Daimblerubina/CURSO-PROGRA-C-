/*Escriba un programa que simule el juego de adivinar un número. El programa deberá 
generar un número aleatorio entre 1 y 100 y pedirle al usuario que adivine cuál es. Si el 
usuario ingresa un número incorrecto, el programa deberá indicarle si el número a adivinar 
es mayor o menor al que ingresó. El juego termina cuando el usuario adivina el número 
correcto*/

#include <iostream>
#include <cstdlib> // Biblioteca para generar números aleatorios
#include <ctime> // Biblioteca para inicializar el generador de números aleatorios

using namespace std;

// Función para generar un número aleatorio entre MIN_NUM y MAX_NUM
int generarNumeroAleatorio(const int MIN_NUM, const int MAX_NUM) {
    srand(time(nullptr)); // Inicializar la semilla del generador de números aleatorios
    return rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
}

// Función para solicitar al usuario un número entre MIN_NUM y MAX_NUM
int solicitarNumeroUsuario(const int MIN_NUM, const int MAX_NUM) {
    int numeroUsuario;
    do {
        cout << "Adivina el número entre " << MIN_NUM << " y " << MAX_NUM << ": ";
        cin >> numeroUsuario;
    } while (numeroUsuario < MIN_NUM || numeroUsuario > MAX_NUM); // Validar que el número ingresado esté en el rango permitido
    return numeroUsuario;
}

// Función para comparar el número ingresado por el usuario con el número generado aleatoriamente
void compararNumeros(const int numeroAleatorio, const int numeroUsuario, int& intentos) {
    if (numeroUsuario < numeroAleatorio) {
        cout << "El número a adivinar es mayor." << endl;
    }
    else if (numeroUsuario > numeroAleatorio) {
        cout << "El número a adivinar es menor." << endl;
    }
    else {
        cout << "Felicidades, adivinaste el número en " << intentos << " intentos." << endl;
    }
}

int main() {
    const int MIN_NUM = 1; // El número mínimo que puede ser generado
    const int MAX_NUM = 100; // El número máximo que puede ser generado
    int numeroAleatorio = generarNumeroAleatorio(MIN_NUM, MAX_NUM);
    int intentos = 1; // Contador de intentos
    int numeroUsuario = solicitarNumeroUsuario(MIN_NUM, MAX_NUM);

    while (numeroUsuario != numeroAleatorio) {
        compararNumeros(numeroAleatorio, numeroUsuario, intentos);
        numeroUsuario = solicitarNumeroUsuario(MIN_NUM, MAX_NUM);
        intentos++;
    }

    return 0;
}
