#include <iostream>
using namespace std;

int main() {
  int opcion = 0;
  while (opcion != 3) {
    cout << "Seleccione una opción:" << endl;
    cout << "1. Opción 1" << endl;
    cout << "2. Opción 2" << endl;
    cout << "3. Salir" << endl;

    cin >> opcion;

    switch (opcion) {
      case 1:
        cout << "Seleccionaste la opción 1" << endl;
        break;
      case 2:
        cout << "Seleccionaste la opción 2" << endl;
        break;
      case 3:
        cout << "Adiós!" << endl;
        break;
      default:
        cout << "Opción no válida, intenta de nuevo" << endl;
        break;
    }
  }
  return 0;
}
