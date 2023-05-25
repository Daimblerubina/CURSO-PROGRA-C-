#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

using namespace std;


class Productos{
private: 
char nombre[50];
int precio, tipo,exis, codigo;

public:
 Productos();
~Productos();
 void setNombre(char *);
 char* getNombre();
 void setPrecio();
 int getPrecio();
 void setExis();
 int getExis();
 void setTipo();
 int getTipo();
 void setCodigo();
 int getCodigo();

}pro;

void Agregarpro();
void Buscarpro();
void Modificarpro();
void Salidas1();
void Salidas2();
void Salidas3();

struct nodo{
   int codigo,tipo,exis,precio;
   char nom[50];
   struct nodo *sgte;
  };

typedef struct nodo *Tlista;
Tlista lista = NULL;

void insertarInicio(Tlista &lista, int codigo, int tipo, int exis)
{
Tlista q; 
  q = new(struct nodo);
  q->codigo = codigo;
  q->tipo = tipo;
  q->exis = exis;
  q->sgte = lista;
  lista = q;
}

void reportarLista(Tlista lista)
{
int i = 0;
while(lista != NULL)
{
cout <<"\t\t\t\t\t"<< i+1 <<") "<<endl<<"\t\t\t\t\tcodigo: "<<lista->codigo<<endl<<"\t\t\t\t\ttipo: "<<lista->tipo<<endl<<"\t\t\t\t\tExistencia:"<<lista->exis<<endl;
lista = lista->sgte;
i++;
}
}

/////////////////////////////SETERS//////////////////////////////////// 
void Productos::setNombre(char* temp)
	{strcpy(nombre, temp);}
void Productos::setPrecio()
	{cin>>precio;}
void Productos::setCodigo()
	{cin>>codigo;}
void Productos::setTipo()
	{cin>>tipo;}
void Productos::setExis()
	{cin>>exis;}
////////////////////////////////GETERS////////////////////////////////
char* Productos::getNombre(){ return nombre;}
int Productos::getCodigo(){return codigo;}
int Productos::getPrecio(){return precio;}
int  Productos::getTipo(){return tipo;}
int  Productos::getExis(){return exis;}
///////////////////////////////OTROS///////////////////////////////
Productos::Productos(){
	strcpy(nombre, "\t\t\t\t\tNo ha sido registrado");
	precio=0;
	codigo=0;
	tipo=0;
	exis=0;
}

Productos::~Productos()
{
	cout<<endl<<"\t\t\t\t\tPrograma finalizado";
}

//////////////////////////////Metodos de funcion//////////////////////
//opcion 1
void Agregarpro()
{
	char temp[30];
	ofstream entrada;
  	entrada.open("PRODUCTOS.dat",ios::out|ios::app|ios::binary);
  
  if(entrada.fail())
  {
            cout<<endl<<"\t\t\t\t\tError al crear archivo";
            getch();      
  }   
  
  else 
  {
  	cout<<endl<<"\t\t\t\t\t> Nombre :";
  	fflush(stdin); gets(temp);
  	pro.setNombre(temp);
  	
  	cout<<endl<<"\t\t\t\t\t> Codigo: ";
  	pro.setCodigo();
  	
	cout<<endl<<"\t\t\t\t\t> Tipo"<<endl<<"\t\t\t\t\tdonde"<<endl<<"\t\t\t\t\t1)Analgesicos"<<endl<<"\t\t\t\t\t2)Antibioticos"<<endl<<"\t\t\t\t\t3)Vitaminicos"<<endl<<"\t\t\t\t\tTipo:";
    pro.setTipo();
  	
  	cout<<endl<<"\t\t\t\t\t> Precio: ";
  	pro.setPrecio();
  	
  	cout<<endl<<"\t\t\t\t\t> Existencia: ";
  	pro.setExis();
  	
  entrada.write((char *)&pro, sizeof(Productos));
  entrada.close();
  }   
	
}

//Opcion 2
void Buscarpro()
{
	ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      
      ifstream salida;
     salida.open("PRODUCTOS.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\terror al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     char ctem[50];
     int hay=0;
     
     cout<<endl<<"\t\t\t\t\tIntroduce el nombre del producto a buscar : ";
     fflush(stdin); 
	  gets(ctem);
     
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Productos);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&pro,sizeof(Productos));
                   if(strcmp(pro.getNombre(),ctem)==0)
                     {
                     	cout<<endl<<"\t\t\t\t\t> Nombre : "<<pro.getNombre()<<endl;
              			cout<<"\t\t\t\t\t> Codigo: "<<pro.getCodigo()<<endl;
              			cout<<"\t\t\t\t\t> Precio: "<<pro.getPrecio()<<endl;
              			cout<<"\t\t\t\t\t> Tipo: "<<pro.getTipo()<<endl;
              			cout<<"\t\t\t\t\t> Existencia: "<<pro.getExis()<<endl;                           
                     }
                    else {
                     hay++;	
					}
                     
                     entrada.write((char *)&pro,sizeof(Productos));  
              }
              
              if(hay==nreg){ cout<<"\t\t\t\t\tEl producto que usted busca no se encuentra registrado"<<endl; }
     salida.close();
     entrada.close();
     remove("PRODCUTOS.dat");
     rename("temp.dat","PRODUCTOS.dat");;
     getch();   
     
 		}
}


//opcion 3
void Modificarpro()
{
        ofstream entrada;
      entrada.open("temp.dat",ios::out|ios::binary);
      
      ifstream salida;
     salida.open("PRODUCTOS.dat",ios::in|ios::binary);
     
     if (salida.fail()||entrada.fail())
     {
     cout<<"\t\t\t\t\terror al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     int nreg;
     int ctem;
     char temp[30];
     cout<<endl<<"\t\t\t\t\tIntroduce el codigo del producto: ";
     cin>>ctem;
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Productos);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&pro,sizeof(Productos));
                   if(pro.getCodigo()==ctem)
                     {
                     
                     
                     cout<<"\t\t\t\t\t> Introduzca nuevo precio para el producto: ";
                     pro.setPrecio();
            
                     cout<<"\t\t\t\t\tregistro modificado"<<endl;                             
                     }
                     
                   
                     entrada.write((char *)&pro,sizeof(Productos));    
                     
                    
              }
     salida.close();
     entrada.close();
     remove("PRODUCTOS.dat");
     rename("temp.dat","PRODUCTOS.dat");
     getch();   
     
 }
     
     
     }




//Opcion 4
void Salidas1()
{
	ifstream salida;
     salida.open("PRODUCTOS.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\terror al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     	
     int nreg;
     int a=1;
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Productos);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
             {salida.read((char*)&pro, sizeof(Productos));
             	if(pro.getTipo()==a){
             		
                    cout<<endl<<"\t\t\t\t\t> Nombre: ";
			        cout<<pro.getNombre()<<endl;
			        cout<<"\t\t\t\t\t> Precio: ";
			        cout<<pro.getPrecio()<<endl;
			        cout<<"\t\t\t\t\t> Codigo: ";
			        cout<<pro.getCodigo()<<endl;
			        cout<<"\t\t\t\t\t> Existencia: ";
			        cout<<pro.getExis()<<endl;
				 }
			   
              }
     salida.close();
     getch();
     }
}


//Opcion 5
void Salidas2()
{
	ifstream salida;
     salida.open("PRODUCTOS.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\terror al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     	
     int nreg;
     int b=2;
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Productos);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
             {salida.read((char*)&pro, sizeof(Productos));
             	if(pro.getTipo()==b){
             		
                    cout<<endl<<"\t\t\t\t\t> Nombre: ";
			        cout<<pro.getNombre()<<endl;
			        cout<<"\t\t\t\t\t> Precio: ";
			        cout<<pro.getPrecio()<<endl;
			        cout<<"\t\t\t\t\t> Codigo: ";
			        cout<<pro.getCodigo()<<endl;
			        cout<<"\t\t\t\t\t> Existencia: ";
			        cout<<pro.getExis()<<endl;
				 }
              }
     salida.close();
     getch();
     }
}

//opcion 6 
void Salidas3()
{
	ifstream salida;
     salida.open("PRODUCTOS.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\terror al abrir el archivo"<<endl;
     getch();                  
     }
     else
     {
     	
     int nreg;
     int c=3;
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Productos);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
             {salida.read((char*)&pro, sizeof(Productos));
             	if(pro.getTipo()==c){
             		
                    cout<<endl<<"\t\t\t\t\t> Nombre: ";
			        cout<<pro.getNombre()<<endl;
			        cout<<"\t\t\t\t\t> Precio: ";
			        cout<<pro.getPrecio()<<endl;
			        cout<<"\t\t\t\t\t> Codigo: ";
			        cout<<pro.getCodigo()<<endl;
			        cout<<"\t\t\t\t\t> Existencia: ";
			        cout<<pro.getExis()<<endl;
				 }
              }
     salida.close();
     getch();
     }
}
