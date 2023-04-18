#include <iostream>
using namespace std;

float F(float x) {
  float y;

  switch((int)x) {
    case 1:
      y = 1;
      break;
    case 2:
      y = 2;
      break;
    case 3:
      y = 3;
      break;
    default:
      y = x * x;
      break;
  }

  return y;
}

int main() {
  float x;

  cout << "Ingrese un valor para x: ";
  cin >> x;

  cout << "F(x) = " << F(x) << endl;

  return 0;
}
