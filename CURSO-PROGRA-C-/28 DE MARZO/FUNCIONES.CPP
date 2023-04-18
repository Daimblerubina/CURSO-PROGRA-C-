#include <iostream>
using namespace std;

int suma(int numero1, int numero2) // pongo un int para retornar el valor de suma
{                                  // ESTA ES UNA FUNCION SUMA
    int suma = 0;
    suma = numero1 + numero2;
    return suma; // Y terminamos pidiendo la suma
}

int resta(int numero1, int numero2) // pongo un int para retornar el valor de resta , EN OTRO CASI SE PONDRIA VOID
{                                   // ESTA ES UNA FUNCION RESTA
    int resta = 0;
    resta = numero1 - numero2;
    return resta; // Y terminamos pidiendo la resta
}

float division(float numero1, float numero2) // pongo un int para retornar el valor de division , EN OTRO CASI SE PONDRIA VOID
{                                            // ESTA ES UNA FUNCION DIVISION
    float division = 0;
    if (numero1 == 0)
    {
        cout << "no se puede dividr entre 0\n";
    }
    else
    {
        division = numero1 / numero2;
    }
    return division; // Y terminamos pidiendo la division
}

int multiplicacion(int numero1, int numero2) // pongo un int para retornar el valor de multiplicacion , EN OTRO CASI SE PONDRIA VOID
{                                            // ESTA ES UNA FUNCION MULTIPLICACION
    int multiplicacion = 0;
    multiplicacion = numero1 * numero2;
    return multiplicacion; // Y terminamos pidiendo la multiplicacion
}
int main()
{
    int num1, num2;
    cout << "ingrese 2 numeros para la suma"
         << "\n"; // /* y */
    cin >> num1;
    cin >> num2;
    cout << "La suma es: \t" << suma(num1, num2) << "\n"; // este \t = es el TABULADOR