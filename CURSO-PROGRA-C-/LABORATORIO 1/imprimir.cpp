#include <iostream>
#include <string>
#include <fstream> //libreira para archivos
// #include "facultad_01.cpp"
#include "estudiante.cpp"

using namespace std;

int main()
{
    // crear cursos
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseño de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);
    // cursos de zootecnia
    Curso curs_6("0006", "Nutricion animal", 4);
    Curso curs_7("0007", "Ecosistemas menores", 3);
    Curso curs_8("0008", "Microbiologia animal", 3);
    Curso curs_9("0009", "Zoologia aplicada", 4);
    Curso curs_10("0010", "Morfologia animal", 4);

    Curso cursos[10] = {curs_1, curs_2, curs_3, curs_4, curs_5, curs_6, curs_7, curs_8, curs_9, curs_10};

    // declaramos
    ofstream archivo("cursos.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    archivo << "Datos de cursos \n";
    for (int i = 0; i < 10; i++)
    {
        archivo << cursos[i].toString() << "\n";
    }
    archivo.close();

    return 0;
}