#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

class Persona1
{
	private:
		char nom[30];
		int edad, cod;
	public:
		Persona1();
		~Persona1();
		void setNom(char*);
		void setEdad();
		void setCod();
		char* getNom();
		int getEdad();
		int getCod();
};

class Cliente:public Persona1
{
	private:
		int tel;
		char rfc[30];
	public:
		Cliente();
		~Cliente();
		void setTel();
		void setRfc(char*);
		int getTel();
		char* getRfc();

}emp;

class Cita:public Persona1
{
	private:
		int dia, hora, a;
		char mes[20];
	public:
		Cita();
		~Cita();
		void setA();
		void setDia();
		void setHora();
		void setMes(char*);
		int getA();
		int getDia();
		int getHora();
		char* getMes();

}ci;

void AgregarCli();
void MostrarCli();
void BuscarCli(int);
void BuscarCli(char* );
void ModificarCli();
void EliminarCli();
void EstablecerCit();
void ListaCit();
void ReporteS();
void ReporteNA();
void ReporteO();


char ntem[40];
int cod_trbjdr, ctem;
//int cod_trbjdr, x, i, ctem;


Persona1::Persona1()
{
	strcpy(nom, "VACIO");
	edad=0;
	cod=0;
}

Persona1::~Persona1()
{
	cout<<endl<<"Programa finalizado";
}

Cliente::Cliente()
{
	tel=0;
	strcpy(rfc,"VACIO");
}

Cliente::~Cliente()
{
	cout<<endl<<"Programa finalizado";
}


Cita::Cita()
{
	dia=0;
	hora=0;
	strcpy(mes,"VACIO");
}

Cita::~Cita()
{
	cout<<endl<<"Programa finalizado";
}


//set
void Persona1::setNom(char* temp)
	{strcpy(nom, temp);}
void Persona1::setEdad()
	{cin>>edad;}
void Persona1::setCod()
	{cin>>cod;}
void Cliente::setTel()
	{cin>>tel;}
void Cliente::setRfc(char* temp)
	{strcpy(rfc, temp);}
void Cita::setA()
	{cin>>a;}
void Cita::setDia()
	{cin>>dia;}
void Cita::setHora()
	{cin>>hora;}
void Cita::setMes(char* temp)
	{strcpy(mes, temp);}

//getters
char* Persona1::getNom()
	{return nom;}
int Persona1::getEdad()
	{return edad;}
int Persona1::getCod()
	{return cod;}
int Cliente::getTel()
	{return tel;}	
char* Cliente::getRfc()
	{return rfc;}
int Cita::getA()
	{return a;}
int Cita::getDia()
	{return dia;}
int Cita::getHora()
	{return hora;}
char* Cita::getMes()
	{return mes;}	


void AgregarCli()
{
	char temp[30];
	ofstream entrada;
  	entrada.open("clientes.dat",ios::out|ios::app|ios::binary);
  
  if(entrada.fail())
  {
        cout<<endl<<"\t\t\t\t\tError al crear archivo";
        getch();      
  }   
  
  else 
  {
  	cout<<endl<<"\t\t\t\t\t->Nombre :";
  	fflush(stdin); gets(temp);
  	emp.setNom(temp);
  	
  	cout<<"\t\t\t\t\t->Edad: ";
  	emp.setEdad();
  	
  	cout<<endl<<"\t\t\t\t\t->RFC: ";
  	fflush(stdin); gets(temp);
 	emp.setRfc(temp);
  	
  	cout<<endl<<"\t\t\t\t\t->Codigo: ";
  	emp.setCod();
  	
  	cout<<endl<<"\t\t\t\t\t->Telefono: ";
  	emp.setTel();
  entrada.write((char *)&emp, sizeof(Cliente));
  entrada.close();
  }   
	
}


void BuscarCli(int ctem)
{
	ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      
      ifstream salida;
     salida.open("clientes.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\tERROR AL ABRIR EL ARCHIVO"<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cliente);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&emp,sizeof(Cliente));
                   if(emp.getCod()==ctem)
                     {
                     	cout<<endl<<"\t\t\t\t\t->Nombre : "<<emp.getNom();
              			cout<<endl<<"\t\t\t\t\t->Edad : "<<emp.getEdad();
			  			cout<<endl<<"\t\t\t\t\t->RFC : "<<emp.getRfc();
              			cout<<endl<<"\t\t\t\t\t->Codigo: "<<emp.getCod();
              			cout<<endl<<"\t\t\t\t\t->Telefono: "<<emp.getTel()<<endl;                           
                     }
                     
                     entrada.write((char *)&emp,sizeof(Cliente));  
              }
     salida.close();
     entrada.close();
     remove("clientes.dat");
     rename("temp.dat","clientes.dat");;
     getch();   
     
 		}
}

void BuscarCli(char* ntem)
{
	ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      
      ifstream salida;
     salida.open("clientes.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\tError al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cliente);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&emp,sizeof(Cliente));
                   if(strcmp(emp.getNom(),ntem)==0)
                     {
                     	cout<<endl<<"\t\t\t\t\t->Nombre : "<<emp.getNom();
              			cout<<endl<<"\t\t\t\t\t->Edad : "<<emp.getEdad();
			  			cout<<endl<<"\t\t\t\t\t->RFC : "<<emp.getRfc();
              			cout<<endl<<"\t\t\t\t\t->Codigo: "<<emp.getCod();
              			cout<<endl<<"\t\t\t\t\t->Telefono: "<<emp.getTel()<<endl;                           
                     }
                     
                     entrada.write((char *)&emp,sizeof(Cliente));  
              }
     salida.close();
     entrada.close();
     remove("clientes.dat");
     rename("temp.dat","clientes.dat");;
     getch();   
     
 		}
}

void ModificarCli()
{
     
        ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      
      ifstream salida;
     salida.open("clientes.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\tError al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     int ctem;
     char temp[30];
     cout<<endl<<"\t\t\t\t\tIntroduce el codigo del cliente a modificar: ";
     cin>>ctem;
     
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cliente);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&emp,sizeof(Cliente));
                   if(emp.getCod()==ctem)
                     {
                     cout<<endl<<"\t\t\t\t\t->Introduzca nuevo nombre: "<<endl;
                     cin.ignore(); gets(temp);
  					 emp.setNom(temp);
                     
                     cout<<"\t\t\t\t\t->Introduzca nueva edad: "<<endl;
                     emp.setEdad();
                     
                     cout<<"\t\t\t\t\t->Introduzca nuevo RFC: "<<endl;
                     cin.ignore(); gets(temp);
                     emp.setRfc(temp);
                     
                     cout<<"\t\t\t\t\t->Introduzca nuevo codigo: "<<endl;
                     emp.setCod();
                     
                     cout<<"\t\t\t\t\t->Introduzca nuevo Telefono: "<<endl;
                     emp.setTel();
                     
                     cout<<"\t\t\t\t\t>Registro Modificado<"<<endl;                             
                     }
                     
                   
                     entrada.write((char *)&emp,sizeof(Cliente));    
                     
                    
              }
     salida.close();
     entrada.close();
     remove("clientes.dat");
     rename("temp.dat","clientes.dat");
     getch();   
     
 }
     
     
     }
	 
void EliminarCli()
{
     
      ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      
      ifstream salida;
     salida.open("clientes.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\tError al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     int ctem;
     
     cout<<endl<<"\t\t\t\t\tIntroduce el codigo del cliente a eliminar"<<endl;
     cin>>ctem;
     
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cliente);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&emp,sizeof(Cliente));
                   if(emp.getCod()==ctem)
                     {
                     cout<<"\t\t\t\t\t>Registro Borrado<"<<endl;                             
                     }
                     
                     else
                     {
                     entrada.write((char *)&emp,sizeof(Cliente));    
                     }
                    
              }
     salida.close();
     entrada.close();
     remove("clientes.dat");
     rename("temp.dat","clientes.dat");
     
     getch();   
     
     }
}

void EstablecerCit()
{
	char temp[30];
	ofstream entrada;
  	entrada.open("citas.dat",ios::out|ios::app|ios::binary);
  
  if(entrada.fail())
  {
            cout<<endl<<"\t\t\t\t\tError al crear archivo";
            getch();      
  }   
  
  else 
  {
  	cout<<endl<<"\t\t\t\t\t->Codigo Cliente: ";
  	ci.setCod();
  	
	cout<<endl<<"\t\t\t\t\t->Dia: ";
  	ci.setDia();
	
	cout<<endl<<"\t\t\t\t\t->Mes: ";
  	fflush(stdin); gets(temp);
  	ci.setMes(temp);
  	
  	cout<<endl<<"\t\t\t\t\t->Hora: ";
  	ci.setHora();
  	
	cout<<endl<<"\t\t\t\t\t->Tipo de Examen"<<endl<<"\t\t\t\t\t 1.Sangre"<<endl<<"\t\t\t\t\t 2.Nivel Azucar"<<endl<<"\t\t\t\t\t 3.Orina"<<endl;
  	ci.setA();
  	
  entrada.write((char *)&ci, sizeof(Cita));
  entrada.close();
  }   
}

void ListaCit()
{
	ifstream salida;
     salida.open("citas.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\tError al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     	
     int nreg;
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cita);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              	salida.read((char*)&ci, sizeof(Cita));
            cout<<endl<<"\t\t\t\t\t->Codigo: ";
			cout<<ci.getCod()<<endl;
			cout<<"\t\t\t\t\t->Dia: ";
			cout<<ci.getDia()<<endl;
			cout<<"\t\t\t\t\t->Mes: ";
			cout<<ci.getMes()<<endl;
			cout<<"\t\t\t\t\t->Hora: ";
			cout<<ci.getHora()<<endl;
			cout<<"\t\t\t\t\t->Tipo de Examen: ";
			if(ci.getA()==1)
			{cout<<"\t\t\t\t\t Sangre"<<endl;}		
			if(ci.getA()==2)
			{cout<<"\t\t\t\t\t Nivel Azucar"<<endl;}	
			if(ci.getA()==3)
			{cout<<"\t\t\t\t\t Orina"<<endl;}
			}
            }
     salida.close();
     getch();
       
     }


void ReporteS()
{
	 ifstream salida;
     salida.open("citas.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\tError al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     	
     int nreg;
     int c=1;
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cita);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
             {salida.read((char*)&ci, sizeof(Cita));
             	if(ci.getA()==c){
             		
                    cout<<endl<<"\t\t\t\t\t->Codigo: ";
					cout<<ci.getCod()<<endl;
					cout<<"\t\t\t\t\t->Dia: ";
					cout<<ci.getDia()<<endl;
					cout<<"\t\t\t\t\t->Mes: ";
					cout<<ci.getMes()<<endl;
					cout<<"\t\t\t\t\t->Hora: ";
					cout<<ci.getHora()<<endl;
				 }
              }
     salida.close();
     getch();
     }
}

void ReporteNA()
{
	 ifstream salida;
     salida.open("citas.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\tError al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     	
     int nreg;
     int c=2;
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cita);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
             {salida.read((char*)&ci, sizeof(Cita));
             	if(ci.getA()==c){
             		
                    cout<<endl<<"\t\t\t\t\t->Codigo: ";
					cout<<ci.getCod()<<endl;
					cout<<"\t\t\t\t\t->Dia: ";
					cout<<ci.getDia()<<endl;
					cout<<"\t\t\t\t\t->Mes: ";
					cout<<ci.getMes()<<endl;
					cout<<"\t\t\t\t\t->Hora: ";
					cout<<ci.getHora()<<endl;
				 }
              }
     salida.close();
     getch();
     }
}

void ReporteO()
{
	 ifstream salida;
     salida.open("citas.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\tError al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     	
     int nreg;
     int c=3;
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Cita);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
             {salida.read((char*)&ci, sizeof(Cita));
             	if(ci.getA()==c){
             		
                    cout<<endl<<"\t\t\t\t\t->Codigo: ";
					cout<<ci.getCod()<<endl;
					cout<<"\t\t\t\t\t->Dia: ";
					cout<<ci.getDia()<<endl;
					cout<<"	\t\t\t\t\t->Mes: ";
					cout<<ci.getMes()<<endl;
					cout<<"\t\t\t\t\t->Hora: ";
					cout<<ci.getHora()<<endl;
				 }
              }
     salida.close();
     getch();
     }
}

