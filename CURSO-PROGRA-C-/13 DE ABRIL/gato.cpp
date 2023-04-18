// clase hija que implementa del padre animal
#include <string>
#include <iostream>

#include "animal.cpp"

class Gato : Animal
{
private:
    int vidas;
    bool maulla;
    bool is_domesticado;

public:
    Gato(int _vida, string _familia) : Animal(_familia)
    {
        vidas = _vida;
    }

    // getter an setter
    int getVidas()
    {
        return vidas;
    }

    void setVidad(int _vidas)
    {
        vidas = _vidas;
    }

    void getDatos(){
        cout<< getFamilia();
    }
};
