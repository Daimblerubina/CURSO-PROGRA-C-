//librerias
#include <string>
#include <iostream>

using namespace std;

class Estudiante{
    private:
    //atributos
    string codigo;
    string nombre;
    string apellido;
    string dni;
    int edad;
    //datetime fecha_nacimiento;

    //metodos y funciones
    public:
    //constructor
     Estudiante(string _nombre, string _apellido, string _dni, int _edad){
        nombre = _nombre;
        apellido = _apellido;
        dni = _dni;
        edad = _edad;
    }

    string getCodigo()
    {
        return codigo;
    }
    string getNombre(){
        return nombre;
    }
    string getApellido(){
        return apellido;
      }

      string getDni(){
          return dni;
      }

      void setCodigo(string _codigo){
  codigo = _codigo;
      }
      void setNombre(string _nombre){
  nombre = _nombre;
      }
      void setApellido(string _apellido){
  apellido = _apellido;
      }
      void setDni(string _dni){
  dni = _dni;
      }

     int getEdad(){
  return edad;
      }

     void setEdad(int _edad)
     {
      edad = _edad;
     }
      //datetime fecha_nacimiento;
     //datetime fecha_nacimiento;
  void imprimir(){
      cout<<"los datos del estudiante es:\t"<<nombre<<" "<<apellido<<" "<<dni<<"\n";
  }


  };

  int main(){
      //crear objetos
      //Estudiante est = new Estudiante();
      Estudiante est("Pepito", "Lopez", "123",20);
      Estudiante est2("Patroclo", "Javier", "456",25);
      Estudiante est3("Alquimedes", "Rodriguez", "789", 82);
      /*cout<<"el nombre del estudiante es: "<<est.getNombre();
      cout<<"el dni del estudiante es: "<<est.getDni();
      cout<<"el apellido del estudiante es: "<<est.getApellido();
  */
  cout<<"los datos de los estudiantes son:"<<"\n";
   est.imprimir();
   est2.imprimir();
   est3.imprimir();
  }