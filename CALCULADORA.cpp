#include <iostream>
using namespace std;
int main(){
    cout<<"ingrese una opcion: /n 1: suma /n 2:resta /n 3:multiplicacion /n 4: division";
    int opcion;
    cin >> opcion;
	if(opcion==1){
		cout<<"ingrese valor 1";
		int a;
		cin>>a;
		cout<<"ingrese valor 2";
		int b;
		cin>>b;
		int resultado =0;
		resultado = suma(a,b);
		cout<<"/n";
		cout<<resultado;
		cout<<"/n"; 
	}
	 if(opcion ==2){
		int a;

	 }



int suma(int a, int b){
	int c = a+b;
	return c;
}

int resta(int a, int b){
	int c = a-b;
	return c;
}

int multiplicaion(int a, int b){
	int c = a*b;
	return c;
}

int division(int a, int b){
	int c = a*b;
	return c;
}





cout << c;

return 0;

}
