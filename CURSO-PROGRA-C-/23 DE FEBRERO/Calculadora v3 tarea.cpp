#include <iostream>
using namespace std;

int main() {
  float num1, num2;
  char op;

  cout << "Ingrese el primer número: ";
  cin >> num1;

  cout << "Ingrese el segundo número: ";
  cin >> num2;

  cout << "Ingrese la operación (+, -, *, /): ";
  cin >> op;

  switch(op) {
    case '+':
      cout << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 * num2 << endl;
      break;
    case '/':
      if (num2 != 0)
        cout << num1 / num2 << endl;
      else
        cout << "No se puede dividir por cero" << endl;
      break;
    default:
      cout << "Operación no válida" << endl;
      break;
  }

  return 0;
}
