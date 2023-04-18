#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingresa un número: ";
    cin >> num;

    switch (num)
    {
    case 0:
        cout << "El número es igual a cero" << std::endl;
        break;
    case 1:
    case 2:
    case 4:
    case 3:
        cout << "El número es menor o igual a 3" << std::endl;
        break;
    default:
        cout << "El número es mayor a 3" << std::endl;
        break;
    }

    return 0;
}