#include <iostream>

class Cuadrilatero {
public:
    virtual float area() = 0;
    virtual float perimetro() = 0;
};

class Rectangulo : public Cuadrilatero {
private:
    float base;
    float altura;

public:
    Rectangulo(float b, float h) : base(b), altura(h) {}

    float getBase() {
        return base;
    }

    float getAltura() {
        return altura;
    }

    void setBase(float b) {
        base = b;
    }

    void setAltura(float h) {
        altura = h;
    }

    float area() override {
        return base * altura;
    }

    float perimetro() override {
        return 2 * (base + altura);
    }
};

class Trapecio : public Cuadrilatero {
private:
    float baseMenor;
    float baseMayor;
    float altura;

public:
    Trapecio(float bm, float BM, float h) : baseMenor(bm), baseMayor(BM), altura(h) {}

    float getBaseMenor() {
        return baseMenor;
    }

    float getBaseMayor() {
        return baseMayor;
    }

    float getAltura() {
        return altura;
    }

    void setBaseMenor(float bm) {
        baseMenor = bm;
    }

    void setBaseMayor(float BM) {
        baseMayor = BM;
    }

    void setAltura(float h) {
        altura = h;
    }

    float area() override {
        return (baseMenor + baseMayor) * altura / 2.0f;
    }

    float perimetro() override {
        return baseMenor + baseMayor + 2 * sqrt(pow((baseMayor - baseMenor) / 2.0f, 2) + pow(altura, 2));
    }
};

class Cuadrado : public Cuadrilatero {
private:
    float lado;

public:
    Cuadrado(float l) : lado(l) {}

    float getLado() {
        return lado;
    }

    void setLado(float l) {
        lado = l;
    }

    float area() override {
        return lado * lado;
    }

    float perimetro() override {
        return 4 * lado;
    }
};

int main() {
    // Calculando el área de cada cuadrilátero
    Rectangulo rectangulo(3.0f, 5.0f);
    std::cout << "Rectangulo de base " << rectangulo.getBase() << " y altura " << rectangulo.getAltura() << std::endl;
    std::cout << "Area: " << rectangulo.area() << std::endl;
    std::cout << "Perimetro: " << rectangulo.perimetro() << std::endl;

    Trapecio trapecio(2.0f, 5.0f, 4.0f);
    std::cout << "Trapecio de base menor " << trapecio.getBaseMenor() << ", base mayor " << trapecio.getBaseMayor() << " y altura " << trapecio.getAltura() << std::endl;
    std::cout << "Area: " << trapecio.area() << std::endl;
    std::cout << "Perimetro: " << trapecio.perimetro() << std::endl;

    Cuadrado cuadrado(4.0f);
    std::cout << "Cuadrado de lado " << cuadrado.getLado() << std::endl;
    std::cout << "Area: " << cuadrado.area() << std::endl;
    std::cout << "Perimetro: " << cuadrado.perimetro() << std::endl;

return 0;
}
