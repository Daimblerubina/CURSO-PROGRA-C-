#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>


using namespace std;

class Persona
{
	private:
		char nom[30];
		int edad, cod;
	public:
		Persona();
		~Persona();
		void setNom(char*);
		void setEdad();
		void setCod();
		char* getNom();
		int getEdad();
		int getCod();
};

class Empleado:public Persona
{
	private:
		int suel;
		char dir[30], tipoEm[30];
	public:
		Empleado();
		~Empleado();
		void setSuel();
		void setDir(char*);
		void setTipoEm(char*);
		int getSuel();
		char* getDir();
		char* getTipoEm();
}empl;

struct Templeado
{
    char nombre[30]; 
    int edad;
    int cod;
	int sueld;
    char dir[30];
	char tipoEmp[30] ;
};
void burbuja(Templeado [], int);

void AgregarEmp();
void MostrarEmp();
void BuscarEmp();
void ModificarEmp();
void EliminarEmp();
void AgrProd();
void Estructura();
void Burbuja();



Persona::Persona()
{
	strcpy(nom, "VACIO");
	edad=0;
	cod=0;
}

Persona::~Persona()
{
	cout<<endl<<"\t\t\t\t\tHasta la proxima.";
}

Empleado::Empleado()
{
	suel=0;
	strcpy(dir,"VACIO");
	strcpy(tipoEm, "VACIO");
}

Empleado::~Empleado()
{
	cout<<endl<<"\t\t\t\t\tHasta la proxima";
}


//set
void Persona::setNom(char* temp)
	{strcpy(nom, temp);}
void Persona::setEdad()
	{cin>>edad;}
void Persona::setCod()
	{cin>>cod;}
void Empleado::setSuel()
	{cin>>suel;}
void Empleado::setDir(char* temp)
	{strcpy(dir, temp);}
void Empleado::setTipoEm(char* temp)
	{strcpy(tipoEm, temp);}


//getters
char* Persona::getNom()
	{return nom;}
int Persona::getEdad()
	{return edad;}
int Persona::getCod()
	{return cod;}
int Empleado::getSuel()
	{return suel;}	
char* Empleado::getDir()
	{return dir;}
char* Empleado::getTipoEm()
	{return tipoEm;}



void AgregarEmp()
{
	char temp[30];
	ofstream entrada;
  	entrada.open("empleado.dat",ios::out|ios::app|ios::binary);
  
  if(entrada.fail())
  {
            cout<<endl<<"Error al crear archivo";
            getch();      
  }   
  
  else 
  {
  	cout<<endl<<"\t\t\t\t\t> Nombre del empleado: ";
  	fflush(stdin); gets(temp);
  	empl.setNom(temp);
  	
  	cout<<endl<<"\t\t\t\t\t> Edad del empleado: ";
  	empl.setEdad();
  	
  	cout<<endl<<"\t\t\t\t\t> Codigo del empleado: ";
  	empl.setCod();
  	
  	cout<<endl<<"\t\t\t\t\t> Sueldo quincenal del empleado: ";
  	empl.setSuel();
  	
  	cout<<endl<<"\t\t\t\t\t> Direccion del empleado: ";
  	fflush(stdin); gets(temp);
 	empl.setDir(temp);
 	
	cout<<endl<<"\t\t\t\t\t> Tipo de empleado: ";
	fflush(stdin);gets(temp);
  	empl.setTipoEm(temp);
  	
  entrada.write((char *)&empl, sizeof(Empleado));
  entrada.close();
  }   
	
}

void MostrarEmp()
{
	ifstream salida;
     salida.open("empleado.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\tERROR AL ABRIR EL ARCHIVO..."<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Empleado);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
        {
            salida.read((char*)&empl, sizeof(Empleado));
            cout<<endl<<endl<<"\t\t\t\t\t> Nombre de empleado: ";
			cout<<empl.getNom()<<endl;
			cout<<"\t\t\t\t\t> Edad del empleado: ";
			cout<<empl.getEdad()<<endl;
			cout<<"\t\t\t\t\t> Codigo del empleado: ";
			cout<<empl.getCod()<<endl;
			cout<<"\t\t\t\t\t> Sueldo quincenal del empleado: ";
			cout<<empl.getSuel()<<endl;
			cout<<"\t\t\t\t\t> Direccion del empleado: ";
			cout<<empl.getDir()<<endl;
			cout<<"\t\t\t\t\t> Tipo de empleado: ";
			cout<<empl.getTipoEm()<<endl;
        }
     salida.close();
     getch();
       
     }
		
}

void BuscarEmp()
{
      ifstream salida;
     salida.open("empleado.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\tERROR AL ABRIR EL ARCHIVO..."<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     int ctem, y=0;
     
     cout<<endl<<"\t\t\t\t\tIntroduce el codigo del empleado que desea buscar: ";
     cin>>ctem;
     
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Empleado);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&empl,sizeof(Empleado));
                   if(empl.getCod()==ctem)
                     {
                     	cout<<endl<<endl<<"\t\t\t\t\t> Nombre del empleado: "<<empl.getNom();
              			cout<<endl<<"\t\t\t\t\t> Edad del empleado: "<<empl.getEdad();
			  			cout<<endl<<"\t\t\t\t\t> Direccion del empleado: "<<empl.getDir();
              			cout<<endl<<"\t\t\t\t\t> Tipo de empleado: "<<empl.getTipoEm();
              			cout<<endl<<"\t\t\t\t\t> Codigo del empleado: "<<empl.getCod();
              			cout<<endl<<"\t\t\t\t\t> Sueldo quincenal del empleado: "<<empl.getSuel()<<endl;                           
                     }
                     else
                     {
                     	y++;
					 }
					 
					 if(nreg==y)
					 {
					 	cout<<endl<<endl<<"\t\t\t\t\tEL REGISTRO NO COINCIDE CON LA BASE DE DATOS..."<<endl;
					 }
              }
     salida.close();
     getch();   
     
 		}
}



void ModificarEmp()
{
     
        ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      
      ifstream salida;
     salida.open("empleado.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\tERROR AL ABRIR EL ARCHIVO..."<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     int ctem;
     char temp[30];
     cout<<endl<<"\t\t\t\t\tIntroduce el codigo del empleado a modificar: ";
     cin>>ctem;
     
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Empleado);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&empl,sizeof(Empleado));
                   if(empl.getCod()==ctem)
                     {
                     cout<<endl<<"\t\t\t\t\t> Introduzca nuevo nombre: "<<endl;
                     cin.ignore(); gets(temp);
  					 empl.setNom(temp);
                     
                     cout<<"\t\t\t\t\t> Introduzca nueva edad: "<<endl;
                     empl.setEdad();
                     
                     cout<<"\t\t\t\t\t> Introduzca nueva direcci�n: "<<endl;
                     cin.ignore(); gets(temp);
                     empl.setDir(temp);
                     
                     cout<<"\t\t\t\t\t> Introduzca nuevo codigo: "<<endl;
                     empl.setCod();
                     
                     cout<<"\t\t\t\t\t> Introduzca nuevo sueldo: "<<endl;
                     empl.setSuel();
                     
                     cout<<"\t\t\t\t\t> Introduzca nuevo trabajo: "<<endl;
                     cin.ignore(); gets(temp);
                     empl.setTipoEm(temp);
                     
                     cout<<"\t\t\t\t\t> Registro modificado..."<<endl;                             
                     }
                     
                   
                     entrada.write((char *)&empl,sizeof(Empleado));    
                     
                    
              }
     salida.close();
     entrada.close();
     remove("empleado.dat");
     rename("temp.dat","empleado.dat");
     getch();   
     
 }
     
     
     }
	 
void EliminarEmp()
{
     
      ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      
      ifstream salida;
     salida.open("empleado.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\tERROR AL ABRIR EL ARCHIVO..."<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     int ctem;
     
     cout<<endl<<"\t\t\t\t\tIntroduce el codigo del empleado a eliminar: ";
     cin>>ctem;
     
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Empleado);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&empl,sizeof(Empleado));
                   if(empl.getCod()==ctem)
                     {
                     cout<<"\t\t\t\t\tRegistro borrado..."<<endl;                             
                     }
                     
                     else
                     {
                     entrada.write((char *)&empl,sizeof(Empleado));    
                     }
                    
              }
     salida.close();
     entrada.close();
     remove("empleado.dat");
     rename("temp.dat","empleado.dat");
     
     getch();   
     
     }
}



void Estructura()
{
	Templeado registro, *array;
    int tamanyo = sizeof(Templeado); // Tama�o de un registro
    int i = 0, num_registros;
				ifstream salida;
    			salida.open("empleado.dat", ios::binary);
    			if(salida.fail())
    			{
       				cout << "Error al abrir el fichero empleado.dat" << endl;
       				system("pause");
       				exit(1);
    			}
    			salida.seekg(0,ios::end); 
    			num_registros=salida.tellg()/tamanyo;
    			array = new Templeado[num_registros];
    			if(array==NULL)
    			{
       				cout << "Error en la asignaci�n de memoria\n";
       				system("pause");
       				exit(1);
    			}

    			salida.seekg(0); 
    			salida.read((char *) &array[i], tamanyo);
    			
    			burbuja(array,num_registros); 
    			for(i=0;i<num_registros;i++)
    			{
            		cout <<endl<< "\n\t\t\t\t\t EMPLEADO: " << i+1 << endl;
            		cout << "\t\t\t\t\t> Nombre: " << array[i].nombre << endl;
            		cout << "\t\t\t\t\t> Edad: " << array[i].edad << endl;
            		cout << "\t\t\t\t\t> Codigo: " << array[i].cod << endl;
            		cout << "\t\t\t\t\t> Sueldo: " << array[i].sueld << endl;
					cout << "\t\t\t\t\t> Direccion: " << array[i].dir << endl;
            		cout << "\t\t\t\t\t> Tipo de empleado: " << array[i].tipoEmp << endl;
    			}
    			salida.close();
    			delete [] array;
}

void burbuja(Templeado A[], int N)
{
    int i, j;
    Templeado aux;
    for(i=0;i<N-1;i++)      
        for(j=0;j<N-i-1;j++)
            if(A[j+1].edad<A[j].edad) 
            {               
              aux=A[j+1];   
              A[j+1]=A[j];  
              A[j]=aux;
            }
}
