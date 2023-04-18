#include <iostream>
#include <string>
#include <ctime>

#include "estudiante.cpp"

using namespace std;

int main()
{

    Estudiante est("2023000001", "FIIS", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");

    // franco rubina

    /*
    Estudiante est2("20210090", "cinthia.perez@unas.edu.pe", "carlos", "manuel", "97270027");
    Estudiante est3("20210090", "maria.perez@unas.edu.pe", "contreras", "maria", "97270040");
    Estudiante est4("20210090", "frank.perez@unas.edu.pe", "cardenas", "farnk", "97270047");
    */
    // Jhon Chuquino

    Estudiante est2("20220456", "FIA", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    Estudiante est3("20223457", "FIME", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    Estudiante est4("20223412", "FIA", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");

    // calderon carlos

    /*
    Estudiante est5("20211012", "karolay.perez@unas.edu.pe", "perez", "karolay", "77223564");
    Estudiante est6("20210131", "marta.savedra@unas.edu.pe", "cardenas", "marta", "43273694");
    Estudiante est7("20210156", "franco.rubina@unas.edu.pe", "contreras", "farnco", "94527015");
    */
    // COZ PAZ
    Estudiante est5("202300001", "FIME", "jorge.flores@unas.edu.pe", "flores", "jorge", "45454545");
    Estudiante est6("202300002", "FIIS", "pedro.quispe@unas.edu.pe", "quispe", "pedro", "67676767");
    Estudiante est7("202300003", "FIA", "juan.lara@unas.edu.pe", "lara", "juan", "98989898");
    //-- -- -- -- -- -- -- -- -- -- -- -
    // EXALTACION COTRINA

    Estudiante est8("2020007", "ZOOTECNIA", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    Estudiante est9("2000485", "RNR", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    Estudiante est10("20220050", "FACEA", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    //************************************
    // ACHARTE BERNALES
    Estudiante est11("2023000003", "Zootecnia", "kina.malpartida@unas.edu.pe", "malpartida", "kina", "55555555");
    Estudiante est12("2023000004", "FIIA", "rosaura.mhkitharian@unas.edu.pe", "mhkitharian", "rosaura", "56666666");
    Estudiante est13("2023000029", "FIME", "hector.yandel@unas.edu.pe", "yandel", "hector", "55555558");

    // martin romero
    /*
    Estudiante est_1("2022051385", "administracion", "harold.martirio@unas.edu.pe", "martin", "55555555");
    Estudiante est_2("2022051389", "recursos ", "mario.robles@unas.edu.pe", "martin", "11111111");
    Estudiante est_3("2022051347", "contabilidad ", "eduar.rome@.edu.pe", "martin", "444444444");
    */
    // ANA SOFIA ITUSACA LABERIANO

    Estudiante est14("0020552001", "FIIS", "jony.dias@unas.edu.pe", "dias", "jony", "54624517");
    Estudiante est15("2252001", "FIME", "alvaro.reyes@unas.edu.pe", "reyes", "alvaro", "72649710");
    Estudiante est16("2428001", "FIME", "kevin.rojas@unas.edu.pe", "rojas", "kevin", "65321785");

    // OSCAR JESUS CHAVEZ CARRION

    Estudiante est17("2022001", "FIIS", "axel.acharte@unas.edu.pe", "acharte", "axel", "84724623");
    Estudiante est18("2022002", "FIME", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    Estudiante est19("2022003", "RNR", "manuel.jimenez@unas.edu.pe", "jimenez", "manuel", "62523345");

    // Orihuela Aspilcueta  -- direccion add
    /*
    Estudiante est18("153542", "FIIS", "Pedrito.Rojas@unas.edu.pe", "Rojas", "Pedrito", "Av. losMatones", "76018810");
    Estudiante est19("46346354", "FIME", "Jorgito.Acharte@unas.edu.pe", "Acharte", "Jorgito", "Av.", "74382424");
    Estudiante est20("1535444", "Zootecnia", "Cantinflaso@unas.edu.pe", "Bernales", "Cantinflas", "sadas", "73498245");
    */
    // Martinez Hurtado Euler Losvin
    Estudiante est20("0020180342", "ECONOMIA", "jasmin.palacios@unas.edu.pe", "palacios", "jasmin", "34725463");
    Estudiante est21("0020150234", "CONTABILIDAD", "pedro.acharte@unas.edu.pe", "acharte", "pedro", "78656664");
    Estudiante est22("002010231", "ZOTECNIA", "axel.lalangui@.edu.pe", "lalangui", "Axel", "74526323");

    cout << "Estudiantes : \n";
    est.getDatos();

    return 0;
}
