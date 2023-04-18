
# <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona
{
private:
    string apellido;
    string nombre;
    string direcion;
    string dni;
    string fecha_nacimiento;

public:
    Persona(string _apellidos, string _nombres, string _dni)
    {
        apellido = _apellidos;
        nombres = _nombres;
        dni = _dni;
    }
    // metodos de getter an setter
    string getApellidos()
    {
        return apellido;
    }

    void setApellidos(string _apellidos)
    {
        apellido = _apellidos;
    }

    string getNombres()
    {
        return nombres;
    }

    void setNombre(string _nombre)
    {
        nombres = _nombre;
    }

    string getDireccion(){
        return direcion;
    }

    void setDireccion(string _direccion){
       direcion= _direccion; 
    }

    string getDNI(){
        return direcion;
    }

    void setDNI(string _dni){
       _di= _dni; 
    }
};


--------------------estudiante
#include <iostream>
#include <string>
#include <ctime>
#include "persona.cpp"


using namespace std;

class Estudiante : Persona
{
private:
    string codigo_estudiante;
    string facultad;
    string correo;

public:
    // Automovil(int numRuedas, int numPuertas) : Vehiculo(numRuedas), numPuertas_(numPuertas) {}

    Estudiante(string _codigo, string _facultad, string _correo, string _apellidos, string _nombres, string _dni) : Persona(_apellidos, _nombres, _dni)
    {
        codigo_estudiante = _codigo;
        facultad = _facultad;
        correo = _correo;
    }
    // getter an setter
    string getCodigo()
    {
        return codigo_estudiante;
    }
    void setCodigo(string _codigo)
    {
        codigo_estudiante = _codigo;
    }
    string getFacultad()
    {
        return facultad;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }
    string getCorreo()
    {
        return correo;
    }
    void setCorreo(string _correo)
    {
        correo = _correo;
    }
    void getDatos()
    {
        cout << "los datos del estudiante es: " << getNombres() << ", " << getApellidos() << " " << getDNI();
    }
};

--main
#include <iostream>
#include <string>
#include <ctime>

#include "estudiante.cpp"

using namespace std;

int main(){

    Estudiante est("2023000001","FIIS", "juanito.perez@unas.edu.pe","perez", "juanito", "44444444");

    cout<<"Estudiantes : \n";
    est.getDatos();

    return 0;

}

 //franco rubina

	estudiante est2("20210090" , "FIME", "cinthia.perez@unas.edu.pe" , "carlos" , "manuel" , "97270027");
	estudiante est3("20210090" , "FIIS", "maria.perez@unas.edu.pe" , "contreras" , "maria" , "97270040");
	estudiante est4("20210090" ,"FACEA", "frank.perez@unas.edu.pe" , "cardenas" , "farnk" , "97270047");
  
  
  //Jhon Chuquino
  
  Estudiante est_1("20220456", "FIA", "jose.caldas@unas.edu.pe" ," jose", "caldas", "234567");
  Estudiante est_2("20223457", "FIME", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
  Estudiante est_3("20223412", "FIA", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");

	//calderon carlos
  
	estudiante est2("20211012" ,"FIA" , "karolay.perez@unas.edu.pe" , "perez" , "karolay" , "77223564");
	estudiante est3("20210131" ,"FIIS" , "marta.savedra@unas.edu.pe" , "cardenas" , "marta" , "43273694");
	estudiante est4("20210156" ,"FIE" , "franco.rubina@unas.edu.pe" , "contreras" , "farnco" , "94527015");
  
  // COZ PAZ
    Estudiante est1("202300001","FIME","jorge.flores@unas.edu.pe","flores","jorge","45454545");
    Estudiante est2("202300002","FIIS","pedro.quispe@unas.edu.pe","quispe","pedro","67676767");
    Estudiante est3("202300003","FIA","juan.lara@unas.edu.pe","lara","juan","98989898");
-----------------------
//EXALTACION COTRINA
Estudiante est2("2020007","ZOOTECNIA", "manuel.lopez@unas.edu.pe","lopez", "manuel", "20458771");
Estudiante est3("2000485","RNR", "therry.exaltacion@unas.edu.pe","exaltacion", "therry", "2024575");
Estudiante est4("20220050","FACEA", "krystal.exaltacion@unas.edu.pe","exaltacion", "krystal", "87541558");
************************************
//ACHARTEBERNALES BERNALES YANDEL
----------------------
    Estudiante est1("2023000003","Zootecnia","kina.malpartida@unas.edu.pe","malpartida","kina","55555555");
    Estudiante est2("2023000004","FIIA","rosaura.mhkitharian@unas.edu.pe","mhkitharian","rosaura","56666666");
    Estudiante est3("2023000029","FIME","hector.yandel@unas.edu.pe","yandel","hector","55555558");
---------------------

//martin romero
   -----------------------
    Estudiante est_1("2023000091","FIIS","harold.martirio@unas.edu.pe","martin","harold","55555555");
    Estudiante est_2("2023000081","FIME","mario.robles@unas.edu.pe","Robles","mario","11111111");
    Estudiante est_3("2023000051","ADMINISTRACION","eduar.romero@.edu.pe","romero","eduar","444444444");
    
//ANA SOFIA ITUSACA LABERIANO

		Estudiante est1("0020220064","FIIS""jony.dias@unas.edu.pe", "dias", "jony", "54624517");
    Estudiante est2("0020220104","FIME""alvaro.reyes@unas.edu.pe", "reyes", "alvaro", "72649710");
    Estudiante est3("0020220004","FIME""kevin.rojas@unas.edu.pe", "rojas", "kevin", "65321785");
    
// OSCAR JESUS CHAVEZ CARRION

		Estudiante est1("2022001","FIIS","axel.acharte@unas.edu.pe", "acharte", "axel", "84724623");
    Estudiante est2("2022002","FIME","jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    Estudiante est3("2022003","RNR","manuel.jimenez@unas.edu.pe", "jimenez", "manuel", "62523345");
    
//Orihuela Aspilcueta
    Estudiante est1("153542","FIIS","Pedrito.Rojas@unas.edu.pe","Rojas","Pedrito","Av. losMatones","76018810");
    Estudiante est2("46346354","FIME","Jorgito.Acharte@unas.edu.pe","Acharte","Jorgito","Av. Basrrios Altos","74382424");
    Estudiante est3("1535444","Zootecnia","Cantinflaso@unas.edu.pe","Bernales","Cantinflas","Jr.Argentina","73498245");
    
    //Martinez Hurtado Euler Losvin
    
    
    Estudiante est1("0020180342","ECONOMIA","jasmin.palacios@unas.edu.pe","palacios","jasmin","34725463");
    Estudiante est2("0020150234","CONTABILIDAD","pedro.acharte@unas.edu.pe","acharte","pedro","78656664");
    Estudiante est3("002010231","ZOTECNIA","axel.lalangui@.edu.pe","lalangui","Axel","74526323");