// clase base o clase padre
#include <string>
#include <iostream>

using namespace std;

class Animal
{
protected:
    string orejas;
    string cola;
    string ojos;
    int nro_patas;
    bool dientes;
    string familia;

public:
    Animal(string _familia)
    {
        familia = _familia;
    }
//getter and setter
 string getFamilia(){
    return familia;
 }

 void setFamilia(string _familia){
    familia = _familia;
 }

};
