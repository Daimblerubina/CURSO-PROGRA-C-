#include <iostream>

using namespace std;

// Declaración de la clase Cuadrilatero
class Cuadrilatero {
private:
    int lado1, lado2, lado3, lado4;

public:
    // Constructor por defecto
    Cuadrilatero() {
        lado1 = 0;
        lado2 = 0;
        lado3 = 0;
        lado4 = 0;
    }

    // Constructor con parámetros
    Cuadrilatero(int l1, int l2, int l3, int l4) {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
        lado4 = l4;
    }

    // Métodos para modificar los lados del cuadrilátero
    void setLado1(int l1) {
        lado1 = l1;
    }

    void setLado2(int l2) {
        lado2 = l2;
    }

    void setLado3(int l3) {
        lado3 = l3;
    }

    void setLado4(int l4) {
        lado4 = l4;
    }

    // Métodos para obtener los lados del cuadrilátero
    int getLado1() {
        return lado1;
    }

    int getLado2() {
        return lado2;
    }

    int getLado3() {
        return lado3;
    }

    int getLado4() {
        return lado4;
    }

    // Método para obtener el perímetro del cuadrilátero
    int getPerimetro() {
        return lado1 + lado2 + lado3 + lado4;
    }

    // Método para obtener el área del cuadrilátero
    int getArea() {
        return lado1 * lado2;
    }
};

int main() {
    // Creación de tres objetos de tipo Cuadrilatero
    Cuadrilatero cuadrado1(5, 5, 5, 5);
    Cuadrilatero cuadrado2(10, 10, 10, 10);
    Cuadrilatero cuadrado3(7, 7, 7, 7);

    // Modificación de los lados del cuadrado1 y cuadrado2
    cuadrado1.setLado1(6);
    cuadrado1.setLado2(6);

    cuadrado2.setLado1(15);
    cuadrado2.setLado2(15);

    // Obtener la sumatoria de los lados de cada objeto
    int suma_lados1 = cuadrado1.getLado1() + cuadrado1.getLado2() + cuadrado1.getLado3() + cuadrado1.getLado4();
    int suma_lados2 = cuadrado2.getLado1() + cuadrado2.getLado2() + cuadrado2.getLado3() + cuadrado2.getLado4();
    int suma_lados3 = cuadrado3.getLado1() + cuadrado3.getLado2() + cuadrado3.getLado3() + cuadrado3.getLado4();
    int suma_total_lados = suma_lados1 + suma_lados2 + suma_lados3;

    // Obtener el área y perímetro de cada objeto
    int area_cuadrado1 = cuadrado1.getArea();
    int perimetro_cuadrado1 = cuadrado1.getPerimetro();

int area_cuadrado2 = cuadrado2.getArea();
int perimetro_cuadrado2 = cuadrado2.getPerimetro();

int area_cuadrado3 = cuadrado3.getArea();
int perimetro_cuadrado3 = cuadrado3.getPerimetro();

// Obtener la sumatoria de las áreas de todos los objetos
int suma_areas = area_cuadrado1 + area_cuadrado2 + area_cuadrado3;

// Obtener la sumatoria del perímetro de todos los objetos
int suma_perimetros = perimetro_cuadrado1 + perimetro_cuadrado2 + perimetro_cuadrado3;

// Imprimir los resultados
cout << "Lados del cuadrado1: " << cuadrado1.getLado1() << ", " << cuadrado1.getLado2() << ", " << cuadrado1.getLado3() << ", " << cuadrado1.getLado4() << endl;
cout << "Lados del cuadrado2: " << cuadrado2.getLado1() << ", " << cuadrado2.getLado2() << ", " << cuadrado2.getLado3() << ", " << cuadrado2.getLado4() << endl;
cout << "Lados del cuadrado3: " << cuadrado3.getLado1() << ", " << cuadrado3.getLado2() << ", " << cuadrado3.getLado3() << ", " << cuadrado3.getLado4() << endl;

cout << "Suma de los lados del cuadrado1: " << suma_lados1 << endl;
cout << "Suma de los lados del cuadrado2: " << suma_lados2 << endl;
cout << "Suma de los lados del cuadrado3: " << suma_lados3 << endl;
cout << "Suma total de los lados: " << suma_total_lados << endl;

cout << "Área del cuadrado1: " << area_cuadrado1 << endl;
cout << "Perímetro del cuadrado1: " << perimetro_cuadrado1 << endl;

cout << "Área del cuadrado2: " << area_cuadrado2 << endl;
cout << "Perímetro del cuadrado2: " << perimetro_cuadrado2 << endl;

cout << "Área del cuadrado3: " << area_cuadrado3 << endl;
cout << "Perímetro del cuadrado3: " << perimetro_cuadrado3 << endl;

cout << "Suma de las áreas de todos los cuadrados: " << suma_areas << endl;
cout << "Suma de los perímetros de todos los cuadrados: " << suma_perimetros << endl;

return 0;
}

