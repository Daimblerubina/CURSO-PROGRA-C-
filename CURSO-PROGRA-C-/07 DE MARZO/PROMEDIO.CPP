#include <iostream>
using namespace std;

int main() {
  int n, i;
  float sum = 0, promedio;

  cout << "Ingrese la cantidad de números: ";
  cin >> n;

  float numeros[n];

  for (i = 0; i < n; i++) {
    cout << "Ingrese el número " << i + 1 << ": ";
    cin >> numeros[i];
    sum += numeros[i];
  }

  promedio = sum / n;

  cout << "El promedio de los " << n << " números ingresados es: " << promedio << endl;

  return 0;
}
