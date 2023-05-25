
    #include <string>
    
    #include <fstream> // manejo de archivos txt file stream
    // llamado a la clase
    #include "estudiante.cpp"

    using namespace std;

    int main()
    {
        // crear facultades
        Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
        Facultad facu2("002", "Facultad de de Zootecnia", "FZ");

        // Estudiantes de FIIS
        Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
        est1.setFacultad(facu1);
        Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
        est2.setFacultad(facu1);
        Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
        est3.setFacultad(facu1);
        Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
        est4.setFacultad(facu1);
        // Estudiantes de ZOOTECNIA
        Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
        est5.setFacultad(facu2);
        Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
        est6.setFacultad(facu2);
        Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
        est7.setFacultad(facu2);
        Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
        est8.setFacultad(facu2);
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

        // agregando cursos para est1
        est1.agregarCurso(curs_1);
        est1.agregarCurso(curs_2);
        est1.agregarCurso(curs_3);
        est1.agregarCurso(curs_4);
        est1.agregarCurso(curs_5);

        for (int i = 0; i < 5; i++)
        {
            est1.getCurso(i).toString();
        }

        for (int i = 0; i < 5; i++)
        {
            est3.getCurso(i).toString();
        }

        Estudiante listEstudiante[8] = {est1, est2, est3, est4, est5, est6, est7, est8};

        Estudiante listEstudiante2[2];

        string _codigo, _correo, _apellido, _nombre, _dni;
        int opcion = 0;                                                   // para elegir la facultad
        int valor = sizeof(listEstudiante2) / sizeof(listEstudiante2[0]); // la cantidad del arreglo


        for (int i = 0; i < 8; i++)
        {
            // agregar los cursos
            if (listEstudiante[i].getFacultad().getSigla() == "FIIS")
            {
                listEstudiante[i].agregarCurso(curs_1);
                listEstudiante[i].agregarCurso(curs_2);
                listEstudiante[i].agregarCurso(curs_3);
                listEstudiante[i].agregarCurso(curs_4);
                listEstudiante[i].agregarCurso(curs_5);
            }
            if (listEstudiante[i].getFacultad().getSigla() == "FZ")
            {
                listEstudiante[i].agregarCurso(curs_6);
                listEstudiante[i].agregarCurso(curs_7);
                listEstudiante[i].agregarCurso(curs_8);
                listEstudiante[i].agregarCurso(curs_9);
                listEstudiante[i].agregarCurso(curs_10);
            }
            listEstudiante[i].getFacultad().imprimir();
            cout << "***************************\n";
            listEstudiante[i].getDatos();
            cout << "****Datos del Curso*******\n";
            listEstudiante[i].mostrarCursos();
            cout << "***************************\n";
        }

            // Guardar los datos en un archivo
    ofstream archivo("estudiantes.txt");
    if (archivo.is_open())
    {
        for (int i = 0; i < 8; i++)
        {
            archivo << listEstudiante[i].toString() << endl;
        }
        archivo.close();
    }

    // Leer los datos desde el archivo
    string linea;
    ifstream archivo_lectura("estudiantes.txt");
    if (archivo_lectura.is_open())
    {
        while (getline(archivo_lectura, linea))
        {
            cout << linea << endl;
        }
        archivo_lectura.close();
    }

    // Copiar datos de un arreglo a otro
    for (int i = 0; i < valor; i++)
    {
        listEstudiante2[i] = listEstudiante[i];
    }

    // Mostrar los datos de listEstudiante2
    for (int i = 0; i < valor; i++)
    {
        listEstudiante2[i].getDatos();
    }

    return 0;
}


