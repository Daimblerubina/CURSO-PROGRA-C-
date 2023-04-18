#include <iostream>
using namespace std;

int suma(int a, int b)
{
    int c = a + b;
    return c;
}

int resta(int a, int b)
{
    int c = a - b;
    return c;
}

int multiplicacion(int a, int b)
{
    int c = a * b;
    return c;
}

/*
funcion para la division
usen nombres con sentido
int suma_enteros(){
int valor1;
string nombre;
}
*/

int division(int a, int b)
{
    int c = a / b;
    // int c = a%b;
    return c;
}

int main()
{
    cout << "ingrese una opcion: \n 1: suma \n 2:resta \n 3: multiplicacion \n 4: division\n";
    int opcion;
    int valor1 = 0, valor2 = 0, resultado = 0;
    cin >> opcion;

    switch (opcion)
    {
    case 1: // suma()
        cout << "ingrese el valor 1 y el valor 2 para la suma\n";
        cin >> valor1;
        cin >> valor2;
        resultado = suma(valor1, valor2);
        cout << "El resultado de la suma es : " << resultado << "\n";

        break;
    case 2: // resta
        cout << "ingrese el valor 1 y el valor 2 para la resta\n";
        cin >> valor1;
        cin >> valor2;
        resultado = resta(valor1, valor2);
        cout << "El resultado de la resta es : " << resultado << "\n";

        break;
    case 3: // multiplicacion
        cout << "ingrese el valor 1 y el valor 2 para la multiplicacion\n";
        cin >> valor1;
        cin >> valor2;
        resultado = multiplicacion(valor1, valor2);
        cout << "El resultado de la multiplicación es : " << resultado << "\n";

        break;
        ;
    case 4: // division
        cout << "ingrese el valor 1 y el valor 2 para la division\n";
        cin >> valor1;
        cin >> valor2;
        resultado = division(valor1, valor2);
        cout << "El resultado de la division es : " << resultado << "\n";

        break;
    default:
        cout << "ingrese una opción valida";
        break;
    }

    return 0;
}