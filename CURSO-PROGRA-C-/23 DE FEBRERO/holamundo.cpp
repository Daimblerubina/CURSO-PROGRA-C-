#include <iostream>
using namespace std;

int suma(int a, int b){
    int c = a+b;
    return c;
}
int main(){
    int a;

    int b = 3;
    a=5;
    cout << "ingrese un numero";
    cin >> a;
    int c = suma(b,a);
    cout<< c;
    cout<<"hola mundo c+";
    return 0;
}