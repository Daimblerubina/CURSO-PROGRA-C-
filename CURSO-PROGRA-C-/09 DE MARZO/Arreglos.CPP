#include <iostream>
using namespace std;

int main() {
  const int TAMANO = 5;
  int numeros[TAMANO];

  cout << "Ingrese " << TAMANO << " números enteros:" << endl;

  for (int i = 0; i < TAMANO; i++) {
    cin >> numeros[i];
  }

  cout << "Los números ingresados son: ";

  for (int i = 0; i < TAMANO; i++) {
    cout << numeros[i] << " ";
  }

  return 0;
}
