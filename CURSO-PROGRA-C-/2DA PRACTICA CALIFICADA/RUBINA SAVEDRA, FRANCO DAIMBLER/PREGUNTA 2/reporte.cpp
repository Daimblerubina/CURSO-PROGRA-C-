int main() {
    EstudianteInvestigador est1("Juan Perez", 20, "Ingenieria", 6);
    est1.agregarInvestigacion("Desarrollo de software para sistemas embebidos");
    est1.agregarInvestigacion("Inteligencia artificial aplicada a la salud");

    EstudianteInvestigador est2("Maria Rodriguez", 22, "Ciencias Sociales", 8);
    est2.agregarInvestigacion("Estudio de la percepcion del tiempo en la toma de decisiones");
    est2.agregarInvestigacion("Analisis de la estructura de clases sociales en America Latina");

    vector<EstudianteInvestigador> estudiantes = {est1, est2};

    // Imprimir reporte por estudiante y semestre
    for (int semestre = 1; semestre <= 8; semestre++) {
        cout << "Reporte de investigaciones para el semestre " << semestre << ":" << endl;
        for (auto& estudiante : estudiantes) {
            if (estudiante.getSemestre() == semestre) {
                cout << "Estudiante: " << estudiante.getNombre() << endl;
                estudiante.imprimirInvestigaciones();
            }
        }
        cout << endl;
    }

    return 0;
}
