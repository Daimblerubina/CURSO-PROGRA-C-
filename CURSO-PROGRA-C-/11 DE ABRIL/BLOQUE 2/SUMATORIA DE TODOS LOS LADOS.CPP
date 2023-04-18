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
    Rectangulo(float base, float altura) : base(base), altura(altura) {}
    float getBase() { return base; }
    float getAltura() { return altura; }
    void setBase(float base) { this->base = base; }
    void setAltura(float altura) { this->altura = altura; }
    float area() override { return base * altura; }
    float perimetro() override { return 2 * (base + altura); }
};

class Trapecio : public Cuadrilatero {
private:
    float baseMenor;
    float baseMayor;
    float altura;
public:
    Trapecio(float baseMenor, float baseMayor, float altura) : baseMenor(baseMenor), baseMayor(baseMayor), altura(altura) {}
    float getBaseMenor() { return baseMenor; }
    float getBaseMayor() { return baseMayor; }
    float getAltura() { return altura; }
    void setBaseMenor(float baseMenor) { this->baseMenor = baseMenor; }
    void setBaseMayor(float baseMayor) { this->baseMayor = baseMayor; }
    void setAltura(float altura) { this->altura = altura; }
    float area() override { return (baseMenor + baseMayor) * altura / 2; }
    float perimetro() override { return baseMenor + baseMayor + 2 * sqrt(pow((baseMayor - baseMenor) / 2, 2) + pow(altura, 2)); }
};

class Cuadrado : public Cuadrilatero {
private:
    float lado;
public:
    Cuadrado(float lado) : lado(lado) {}
    float getLado() { return lado; }
    void setLado(float lado) { this->lado = lado; }
    float area() override { return pow(lado, 2); }
    float perimetro() override { return 4 * lado; }
};

int main() {
    // Modificando los lados del rectángulo
    Rectangulo rectangulo(5.0f, 8.0f);
    std::cout << "Rectangulo de base " << rectangulo.getBase() << " y altura " << rectangulo.getAltura() << std::endl;
    std::cout << "Area: " << rectangulo.area() << std::endl;
    std::cout << "Perimetro: " << rectangulo.perimetro() << std::endl;

    rectangulo.setBase(7.0f);
    rectangulo.setAltura(10.0f);
    std::cout << "Rectangulo modificado de base " << rectangulo.getBase() << " y altura " << rectangulo.getAltura() << std::endl;
    std::cout << "Area: " << rectangulo.area() << std::endl;
    std::cout << "Perimetro: " << rectangulo.perimetro() << std::endl;

    // Modificando los lados del trapecio
    Trapecio Trapecio
    (3.0f, 6.0f, 4.0f);
std::cout << "Trapecio de base menor " << trapecio.getBaseMenor() << ", base mayor " << trapecio.getBaseMayor() << " y altura " << trapecio.getAltura() << std::endl;
std::cout << "Area: " << trapecio.area() << std::endl;
std::cout << "Perimetro: " << trapecio.perimetro() << std::endl;

trapecio.setBaseMenor(4.0f);
trapecio.setBaseMayor(7.0f);
trapecio.setAltura(5.0f);
std::cout << "Trapecio modificado de base menor " << trapecio.getBaseMenor() << ", base mayor " << trapecio.getBaseMayor() << " y altura " << trapecio.getAltura() << std::endl;
std::cout << "Area: " << trapecio.area() << std::endl;
std::cout << "Perimetro: " << trapecio.perimetro() << std::endl;

// Sumando todos los lados
Cuadrado cuadrado(2.0f);
std::cout << "Cuadrado de lado " << cuadrado.getLado() << std::endl;
std::cout << "Area: " << cuadrado.area() << std::endl;
std::cout << "Perimetro: " << cuadrado.perimetro() << std::endl;

float sumatoriaLados = rectangulo.getBase() + rectangulo.getAltura() + trapecio.getBaseMenor() + trapecio.getBaseMayor() + trapecio.getAltura() + 4 * cuadrado.getLado();
std::cout << "Sumatoria de todos los lados: " << sumatoriaLados << std::endl;

return 0;

