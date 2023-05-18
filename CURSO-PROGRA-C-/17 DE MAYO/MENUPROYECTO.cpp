/*
PROYECTO FINAL DE PROGRAMACION ORIENTADA A OBJETOS
2G 29/06/2020
EQUIPO 2 INTEGRANTES 
->GARCIA	CELEDON	JUAN	ISRAEL
->SALAZAR	ORTIZ	JUAN	PABLO
->BENITEZ	HERNANDEZ	KEVIN	ISRAEL
*/
#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>  
#include "recursosmateriales.cpp"
#include "Empleados.cpp"
#include "ClientesYCitas.cpp"
using namespace std;


char Opi;
int i,codigol, tipol, exist, preciol,x;
char Op;
char opc;
//char ntem[40];
//int cod_trbjdr, x, i, ctem;
void AgrProd();


int main(void){
	Templeado registro, *array;
    int tamanyo = sizeof(Templeado); // Tamanio de un registro
    int i = 0, num_registros;

	 cout<<endl<<"\t\t\tEQUIPO "<<endl;
	 cout<<"INTEGRANTES:"<<endl;
	 cout<<"->AARON MARTIN ROMERO"<<endl;
	 cout<<"->franco daimbler rubina savedra"<<endl;
	 cout<<"->Calderon Carlos Luis miguel"<<endl;
	
	do{
		cout<<endl<<"\t\t\t\t\tLABORATORIO DE ANALISIS CLINICOS"<<endl;
		cout<<"\t\t\t\t\tSELECCIONE LA OPCION QUE DESEA REALIZAR"<<endl;
    	cout<<"\t\t\t\t\t1)RECURSOS MATERIALES"<<endl<<"\t\t\t\t\t2)CONTROL DE PERSONAL"<<endl<<"\t\t\t\t\t3)MANEJO DE CITAS"<<endl<<"\t\t\t\t\t4)SALIR DEL SISTEMA"<<endl<<"\t\t\t\t\tINGRESE OPCION: ";
       	Opi=getche();
    	
    switch (Opi){
            case '1':
            	system("cls");
          	
	do{
		
		cout<<endl<<"\t\t\t\t\tRECURSOS MATERIALES"<<endl;
		cout<<"\t\t\t\t\tSELECCIONE LA OPCION QUE DESEA REALIZAR"<<endl;
    	cout<<"\t\t\t\t\t1)DAR DE ALTA PRODUCTOS"<<endl<<"\t\t\t\t\t2)BUSCAR UN PRODUCTO"<<endl<<"\t\t\t\t\t3)MODIFICAR PRECIO DE UN PRODUCTO"<<endl<<"\t\t\t\t\t4)REPORTE DE ANALGESICOS"<<endl<<"\t\t\t\t\t5)REPORTE DE ANTIBIOTICOS"<<endl<<"\t\t\t\t\t6)REPORTE DE VITAMINICO"<<endl<<"\t\t\t\t\t7)SALIR"<<endl<<"\t\t\t\t\t8)HISTORIAL DE SESION"<<endl<<"\t\t\t\t\tINGRESE OPCION: ";
       	Op=getche();
    	
    switch (Op){
            case '1':
            	
            		if(x<500){
            		cout<<endl<<endl<<"\t\t\t\t\tIntroduzca los campos requeridos acontinuacion...";	
					Agregarpro();
					codigol=pro.getCodigo();
					tipol= pro.getTipo();
					exist=pro.getExis();
					insertarInicio(lista, codigol,tipol, exist);
					x++;
				}
				else{
					cout<<endl<<endl<<"\t\t\t\t\tNo hay espacio de memoria suficiente :/.";
				}
                break;
                
            case '2':
            	
				cout<<endl<<"\t------------------------------------------BUSCAR PRODUCTO.------------------------------------------"<<endl<<endl;
                Buscarpro();
                break;
                
            case '3':
            	
            	cout<<endl<<"\t------------------------------------------MODIFICAR PRODUCTO.------------------------------------------"<<endl<<endl;
                Modificarpro();
			
                break;
                
            case '4':
            	
                cout<<endl<<endl<<"\t\t\t\t\tMostrando productos de tipo Analgesicos: "<<endl;
                Salidas1();
                break;
            case '5':
            	
                cout<<endl<<endl<<"\t\t\t\t\tMostrando productos de tipo Antibioticos: "<<endl;
                Salidas2();
                break;
                
            case '6':
            	
                cout<<endl<<endl<<"\t\t\t\t\tMostrando productos de tipo Vitaminicos: "<<endl;
                Salidas3();
                break;
                
            case '7':
            	cout<<endl<<"\t\t\t\t\tSaliendo..."<<endl;
                break;
                
                
             case '8':
             
            	cout<<endl<<"\t------------------------------------------BUSCAR PRODUCTO.------------------------------------------"<<endl<<endl;
            	reportarLista(lista);
                break;
            default:
                cout<<"\t\t\t\t\tERROR VUELA A INTENTARLO"<<endl;
                break;
        }
        	if(Op!='7'){
		 
	    }
       
       }while(Op!='7');
                break;
//////////////////////////////////////////// Control personal////////////////////////////             
            case '2':
				
			do
			{
				cout<<endl<<"\t\t\t\t\tElija la opcion que quiera realizar: "<<endl;
				cout<<endl<<"\t\t\t\t\t1. Agregar un empleado";
				cout<<endl<<"\t\t\t\t\t2. Mostrar empleados";	
				cout<<endl<<"\t\t\t\t\t3. Buscar un empleado";
				cout<<endl<<"\t\t\t\t\t4. Modificar datos de empleado";
				cout<<endl<<"\t\t\t\t\t5. Eliminar un empleado";
				cout<<endl<<"\t\t\t\t\t6. Agregar un producto";	
				cout<<endl<<"\t\t\t\t\t7. Ordenar por edad";
				cout<<endl<<"\t\t\t\t\t8. Salir";
				cout<<endl<<"\t\t\t\t\tOpcion: ";
				opc=getche();
                     		
				switch(opc){
					case '1':
						
						cout<<endl<<"\t------------------------------------------AGREGAR EMPLEADOS.------------------------------------------"<<endl<<endl;
						if(x<200){
							AgregarEmp();
							x++;
						}
						else{
							cout<<endl<<endl<<"\t\t\t\t\tNo queda memoria.";
						}
						break;
				
					case '2':
						
						cout<<endl<<"\t------------------------------------------MOTRAR EMPLEADOS.------------------------------------------"<<endl<<endl;
                			MostrarEmp();
						break;
				
					case '3':
						
						cout<<endl<<"\t------------------------------------------BUSCAR EMPLEADOS.------------------------------------------"<<endl<<endl;
							BuscarEmp();
						break;
			
					case '4':
						
						cout<<endl<<"\t------------------------------------------MODIFICAR EMPLEADOS.------------------------------------------"<<endl<<endl;
							ModificarEmp();
					break;
			
					case '5':
						
						cout<<endl<<"\t------------------------------------------ELIMINAR EMPLEADOS.------------------------------------------"<<endl<<endl;
						EliminarEmp();
						break;
				
					case '6':
						
						cout<<endl<<"\t------------------------------------------AGREGAR PRODUCTO.------------------------------------------"<<endl<<endl;
						AgrProd();
						break;
				
					case '7':
						
						cout<<endl<<"\t-----------------------------------MOTRAR EMPLEADOS ORDENADOS POR CODIGO.-----------------------------------"<<endl<<endl;
						Estructura();
					break;
					
					case '8':
						cout<<endl<<"\t\t\t\t\tGracias, adios."<<endl;
						break;	
				
					default:
						cout<<endl<<endl<<"Opcion no valida."<<endl;
					break;
			
				}
				getch();
				
		
			}while(opc != '8');
	
                
                break;
///////////////////////////////////////////MANEJO CLIENTES/////////////////////////////////////                
            case '3':
            
			do
			{
			cout<<endl<<"	Manejo De Clientes"<<endl<<endl;
			cout<<endl<<"	1. Agregar un Cliente";
			cout<<endl<<"	2. Buscar un Cliente por codigo";
			cout<<endl<<"	3. Buscar un Cliente por nombre";
			cout<<endl<<"	4. Modificar datos del Cliente";
			cout<<endl<<"	5. Eliminar un Ciente";
			cout<<endl<<"	6. Establecer una Cita";
			cout<<endl<<"	7. Listas de Citas";
			cout<<endl<<"	8. Reportes Clientes Examen de Sangre";
			cout<<endl<<"	9. Reportes Clientes Examen de Nivel Azucar";
			cout<<endl<<"	r. Reportes Clientes Examen de Orina";
			cout<<endl<<"	s. Salir";
			cout<<endl<<"	Opcion: ";
			opc=getche();
		
			switch(opc){
				case '1':
				
				cout<<endl<<"\t------------------------------------------AGREGAR CLIENTES.------------------------------------------"<<endl<<endl;
				if(x<200){
					AgregarCli();
					x++;
				}
				else{
					cout<<endl<<endl<<"\t\t\t\t\tNo queda memoria.";
				}
				break;
					
			case '2':
				
				cout<<endl<<"\t------------------------------------------BUSCAR CLIENTES (CODIGO).------------------------------------------"<<endl<<endl;
					cout<<endl<<"	Introduce el codigo del cliente solicitado: "<<endl;
    				cin>>ctem;
					BuscarCli(ctem);
				break;
				
			case '3':
				system("cls");
				cout<<endl<<"\t------------------------------------------BUSCAR CLIENTES (NOMBRE).------------------------------------------"<<endl<<endl;
					cout<<endl<<"	Introduce el nombre del cliente solicitado: "<<endl;
    				gets(ntem);
					BuscarCli(ntem);
				break;	
			
			case '4':
				
				cout<<endl<<"\t------------------------------------------MODIFICAR DATOS DE CLIENTES.------------------------------------------"<<endl<<endl;
					ModificarCli();
				break;
			
			case '5':
				
				cout<<endl<<"\t------------------------------------------ELIMINAR CLIENTES.------------------------------------------"<<endl<<endl;
					EliminarCli();
				break;
				
			case '6':
				
				cout<<endl<<"\t------------------------------------------ESTABLECER CITAS.------------------------------------------"<<endl<<endl;
					EstablecerCit();
				break;
				
			case '7':
				
				cout<<endl<<"\t------------------------------------------LISTAS DE CITAS.------------------------------------------"<<endl<<endl;
					ListaCit();
				break;
				
			case '8':
				cout<<endl<<"\t------------------------------------------REPORTES DE EXAMENES DE SANGRE.------------------------------------------"<<endl<<endl;
				
					ReporteS();
				break;
			case '9':
				
				cout<<endl<<"\t------------------------------------------REPORTES DE EXAMENES DE NIVEL AZUCAR.------------------------------------------"<<endl<<endl;
					ReporteNA();
				break;
			case 'r':
				system("cls");
				cout<<endl<<"\t------------------------------------------REPORTES DE EXAMENES DE ORINA.------------------------------------------"<<endl<<endl;
					ReporteO();
				break;
			case 's':
				cout<<endl<<"\t\t\t\t\tGOKUUUU, AAAAAHHHH!!!!";
				break;	
				
			default:
				cout<<endl<<endl<<"Opcion no valida."<<endl;
			break;
			
		}
		getch();
		
		
		
	}while(opc != 's');
			
                break;
 /////////////////////////////////////SALIR/////////////////////////////////               
            case '4':
                cout<<endl<<endl<<"SALIENDO..."<<endl<<"QUE TENGA UN BUEN DIA =D";
                break;
         
            default:
                cout<<"ERROR VUELA A INTENTARLO"<<endl;
                break;
        }
        	if(Opi!='4'){
		 
	    }
       
       }while(Opi!='4');
       
   }
   
   void AgrProd()
{
	int i,codigol, tipol, exist;
      ifstream salida;
     salida.open("empleado.dat",ios::in|ios::binary);
     
     if (salida.fail())
     {
     cout<<"\t\t\t\t\tERROR AL ABRIR EL ARCHIVO..."<<endl;
     getch();                  
     }
     else
     {
     int nreg, ctem;
     
     
     cout<<endl<<"\t\t\t\t\tIntroduce el codigo del empleado: ";
     cin>>ctem;
    
     
     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Empleado);
     salida.seekg(0);  
     
       for(int x=0;x<nreg;x++)
              {
              salida.read((char *)&empl,sizeof(Empleado));
                   if(empl.getCod()==ctem)
                     {
                     	if(strcmp(empl.getTipoEm(),"laboratorista")==0 || strcmp(empl.getTipoEm(),"Laboratorista")==0) 
						 {
						 	Agregarpro();
							codigol=pro.getCodigo();
							tipol= pro.getTipo();
							exist=pro.getExis();
							insertarInicio(lista, codigol,tipol, exist);
						}
						else
						{
							cout<<endl<<"\t\t\t\t\tNO TIENES PERMISO PARA DAR DE ALTA UN MEDICAMENTO"<<endl;
						}                       
                     }
              }
     salida.close();
     getch();   
     
 		}
}
