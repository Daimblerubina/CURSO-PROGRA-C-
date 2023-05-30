#include<iostream>
using namespace std;

// Definición de la clase Moto
class Moto{
    private:
    string modelo;
    int stock;
    public:
    Moto(){} // Constructor por defecto de la clase Moto
    Moto(string, int); // Constructor de la clase Moto
    //void mostrar_moto();
    string getmodelo(); // Método para obtener el modelo de la moto
    int getstock(); // Método para obtener el stock de la moto
};

// Definición de la clase Repuesto
class Repuesto{
    private:
    string nombre;
    int stockr;
    public:
    Repuesto(string,int); // Constructor de la clase Repuesto
    Repuesto(){} // Constructor por defecto de la clase Repuesto
    string getnombre(); // Método para obtener el nombre del repuesto
    int getstockr(); // Método para obtener el stock del repuesto
    //void mostrar_repuestos();
};

// Definición de la clase Producto que hereda de las clases Moto y Repuesto
class Producto : public Moto, public Repuesto {
    public:
    Producto(string _modelo, int _stock, string _nombre, int _stockr): Moto(_modelo, _stock), Repuesto(_nombre, _stockr) {}
};

// Definición de la clase Taller
class Taller{
    private:
    string nom_servicio;
    string realizador;
    int tiempo_h,tiempo_m;
    public:
    Taller(){} // Constructor por defecto de la clase Taller
    Taller(string,string,int,int); // Constructor de la clase Taller
    Taller(string,string); // Constructor de la clase Taller
    string getnom_servicio(); // Método para obtener el nombre del servicio del taller
    string getrealizador(); // Método para obtener el realizador del servicio del taller
    int gettiempo_h(); // Método para obtener las horas de tiempo del servicio del taller
    int gettiempo_m(); // Método para obtener los minutos de tiempo del servicio del taller
    void mostrarserv(); // Método para mostrar los detalles del servicio del taller
};

// Definición de la clase Cliente
class Cliente {
private:
    string nombrec;
    int dni;
public:
	Cliente(){} // Constructor por defecto de la clase Cliente
    Cliente(string _nombrec,int _dni); // Constructor de la clase Cliente
    string getnombrec(); // Método para obtener el nombre del cliente
    int getdni(); // Método para obtener el DNI del cliente
};

// Definición de la clase Consumo que hereda de la clase Cliente
class Consumo : public Cliente {
private:
    string producto;
    int cantidad;
public:
    Consumo(string _nombre,int _dni, string _producto, int _cantidad); // Constructor de la clase Consumo
    Consumo(){} // Constructor por defecto de la clase Consumo
    string getProducto(); // Método para obtener el nombre del producto consumido
    int getCantidad(); // Método para obtener la cantidad del producto consumido
};

// Implementación de los constructores de la clase Moto
Moto::Moto(string _modelo,int _stock){
    modelo=_modelo;
    stock=_stock;
}

// Implementación de los constructores de la clase Repuesto
Repuesto::Repuesto(string _nombre,int _stockr){
    nombre=_nombre;
    stockr=stockr;
}

// Implementación de los constructores de la clase Taller
Taller::Taller(string _nom_servicio,string _realizador,int _tiempo_h,int _tiempo_m){
    nom_servicio=_nom_servicio;
    realizador=_realizador;
    tiempo_h=_tiempo_h;
    tiempo_m=_tiempo_m;
}

Taller::Taller(string _nom_servicio ,string _realizador){
	nom_servicio=_nom_servicio;
    realizador=_realizador;
}

// Implementación del constructor de la clase Cliente
Cliente::Cliente(string _nombrec, int _dni) {
    nombrec = _nombrec;
    dni=_dni;
}

// Implementación del constructor de la clase Consumo
Consumo::Consumo(string _nombre,int _dni, string _producto, int _cantidad) : Cliente(_nombre, _dni) {
    producto = _producto;
    cantidad = _cantidad;
}

// Implementación de los métodos de la clase Taller
void Taller::mostrarserv(){
	cout<<"servicio: "<<nom_servicio<<endl;
	cout<<"realizador: "<<realizador<<endl;
	cout<<"..............................."<<endl;
}

string Moto::getmodelo(){
    return modelo;
}

int Moto::getstock(){
    return stock;
}

string Repuesto::getnombre(){
    return nombre;
}

int Repuesto::getstockr(){
    return stockr;
}

string Taller::getnom_servicio(){
    return nom_servicio;
}

string Taller::getrealizador(){
    return realizador;
}

int Taller::gettiempo_h(){
    return tiempo_h;
}

int Taller::gettiempo_m(){
    return tiempo_m;
}

string Cliente::getnombrec(){
	return nombrec;
}

int Cliente::getdni(){
	return dni;
}

string Consumo::getProducto() {
    return producto;
}

int Consumo::getCantidad() {
    return cantidad;
}
