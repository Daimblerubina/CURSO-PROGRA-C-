#include<iostream>
#include<fstream>
#include<string.h>
#include<ctime>
#include<conio.h>
#include"clase moto.cpp"
#include"clase repuestos.cpp"
#include"clase producto.cpp"
#include"clase taller.cpp"
#include"clase cliente.cpp"
#include"clase consumo.cpp"

using namespace std; 
int menu(){
    int opc;
    cout << "======= MENÚ =======\n";
    cout << "1. Agregar moto\n";
    cout << "2. Agregar repuesto\n";
    cout << "3. ver stock de productos\n";
    cout << "4. Agregar servicio del taller\n";
    cout << "5. usar servicio"<<endl;
    cout << "6. Agregar consumo de cliente\n";
    cout << "7. Salir\n";
    cout << "Ingrese una opción: ";
    cin>>opc;
    return opc;
}

int main(){
	cout<<"\t\tMotorin\n"<<endl;
    int opcion=menu();
	while(opcion!=-2){
		switch (opcion) {
            case 1: {
            	//anadir stock
                system("cls");
                ofstream reporte_mot;
                ofstream reportem;
                string nombreMoto;
                int stockMoto,n;
                string categoria="moto";
                
                Moto m[100];
                reporte_mot.open("stock_productos",ios::app);
                reportem.open("categoria_moto.txt",ios::app);
                cout << "digite la cantidad de motos que aniadira: ";
                cin >> n;
                
                for (int i = 0; i < n; i++){
                	
                	cout << "Ingrese el nombre de la moto: ";
	                cin >> nombreMoto;
	                cout << "Ingrese el stock de la moto: ";
	                cin >> stockMoto;
	                m[i]=Moto(nombreMoto,stockMoto);
	                
	                nombreMoto=m[i].getmodelo();
	                stockMoto=m[i].getstock();
	                
	                //reporte_mot<<"modelo: "<<nombreMoto<<endl
	                          // <<"............................."<<endl;
	                
	                int dia, mes, anio, horas, minutos;
					time_t t;
					t = time(NULL);
					struct tm* fecha; // Corrección: se debe declarar como puntero a struct tm
					fecha = localtime(&t);
					dia = fecha->tm_mday;
					mes = fecha->tm_mon + 1;
					anio = fecha->tm_year + 1900;
					horas = fecha->tm_hour;
					minutos = fecha->tm_min;
					reporte_mot<<"fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl
                        <<"hora: "<<horas<<":"<<minutos<<endl
						<<"ategoria: "<<categoria<<endl
				        <<"nombre: "<<nombreMoto<<endl
                        <<"stock: "<<stockMoto<<endl
                        <<"................................"<<endl;
					reportem<<"fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl
                        <<"hora: "<<horas<<":"<<minutos<<endl
						<<"ategoria: "<<categoria<<endl
				        <<"nombre: "<<nombreMoto<<endl
                        <<"stock: "<<stockMoto<<endl
                        <<"................................"<<endl;
				}
                reporte_mot.close();
                reportem.close();
				system("cls");
				cout<<"moto(s) aniadidos correctamente\n\n";
				cout << "\n\npresione cualquier tecla para volver al menu.";
				getch();
				system("cls");
				break;
            }
            case 2: {
                system("cls");
                ofstream reporte_repuesto;
                ofstream reporte_c_rep;
                
                string nom_Repuesto, categoria="repuesto";
                static int sto_Repuesto,n;
                
                Repuesto rpto[100];
                reporte_repuesto.open("stock_productos",ios::app);
                reporte_c_rep.open("categoria_repuestos",ios::app);
                
                cout << "digite la cantidad de repuestos que aniadira: ";
                cin >> n;
                for (int r = 0; r < n; r++){
                	cout << "Ingrese el nombre del repuesto: ";
	                cin >> nom_Repuesto;
	                cout << "Ingrese el stock del repuesto: ";
	                cin >> sto_Repuesto;
	                
	                //nombreRepuesto=rpto[r].getnombre();
	                
	                rpto[r]=Repuesto(nom_Repuesto,sto_Repuesto);
	                //reporte_repuesto<<"modelo: "<<nombreRepuesto<<endl
	                                //<<"............................."<<endl;
	                
	                reporte_c_rep
						   <<"categoria: "<<categoria<<endl
					       <<"nombre: "<<rpto[r].getnombre()<<endl
	                       <<"stock: "<<rpto[r].getstockr()<<endl
	                       <<"................................";
					               
	                int dia, mes, anio,horas, minutos;
			        time_t t;
			        t=time(NULL);
			        struct tm *fecha;    //obtenemos las partes de la fecha
			        fecha=localtime(&t);// nos devolvera un puntero a la estructura tm
					dia=fecha->tm_mday;
			        mes=fecha->tm_mon+1;
			        anio=fecha->tm_year+1900;
			        horas=fecha->tm_hour;
			        minutos=fecha->tm_min;
			        //reporte_repuestos.open("categoria_repuesto.txt",ios::app);////////////////////categoria repuesto////////////////////////
	               
				    reporte_repuesto<<"fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl
	                       <<"hora: "<<horas<<":"<<minutos<<endl
						   <<"categoria: "<<categoria<<endl
					       <<"nombre: "<<rpto[r].getnombre()<<endl
	                       <<"stock: "<<rpto[r].getstockr()<<endl
	                       <<"................................";
	                
					
					////////////////////categoria repuesto////////////////////////
	                
				}
                reporte_repuesto.close();
                reporte_c_rep.close();
               
                
                system("cls");
                cout << "Repuesto agregado correctamente.\n";
				cout << "\n\npresione cualquier tecla para volver al menu.";
				getch();
				system("cls");
                break;
            }
            case 3:{
            	system("cls");
            	ifstream ver_stock;
            	ver_stock.open("stock_productos",ios::in);
            	if(ver_stock.fail()){
            		cout<<"no hay productos agregados";
            		exit(1);
				}
				else{
					string texto;
					while(!ver_stock.eof()){
						getline(ver_stock,texto);
						cout<<texto<<endl;
					}
				}
				ver_stock.close();
				cout << "\n\npresione cualquier tecla para volver al menu.";
				getch();
				system("cls");
				break;
			}
            case 4: {
            	system("cls");
            	ofstream servici0;
            	ofstream servi;
                string servicio, realizador;
                int tiempoh,tiempom,n;
                
                Taller s[100];
                
                cout<<"ingrese la cantidad de servicios que aniadira: ";
                cin>>n;
                servici0.open("servicios.txt",ios::app);
                servi.open("serviciosm.txt",ios::app);
                for(int c=0;c<n;c++){
                	cout << "Ingrese el nombre del servicio: ";
	                cin>>servicio;
	                cout << "Ingrese el nombre del realizador: ";
	                cin >> realizador;
	                cout << "Ingrese el tiempo requerido en horas: ";
	                cin >> tiempoh;
	                cout << "Ingrese el tiempo requerido en minutos: ";
	                cin >> tiempom;
	                s[c]=Taller(servicio,realizador,tiempoh,tiempom);
	                
	                servicio=s[c].getnom_servicio();
	                realizador=s[c].getrealizador();
	                tiempoh=s[c].gettiempo_h();
	                tiempom=s[c].gettiempo_m();
	                s[c]=Taller(servicio, realizador, tiempoh,tiempom);
	                servici0<<"servicio: "<<servicio<<endl
                         <<"realizador: "<<realizador<<endl
                         <<"tiempo h.: "<<tiempoh<<endl
                         <<"tiempo m.: "<<tiempom<<endl
                         <<"..............................."<<endl;
                         
                    servi<<servicio<<endl
                         <<realizador<<endl;
				}
                servici0.close();
                servi.close();
                cout << "Servicio agregado correctamente.\n";
				cout << "\n\npresione cualquier tecla para volver al menu.";
				getch();
				system("cls");
                break;
            }
            case 5: {
			    string servicio, realizador;
			    int tiempoh, tiempom, n;
			    system("cls");
			    ifstream ver_serv;
			    Taller s[100];
			
			    ver_serv.open("serviciosm.txt", ios::in);
			    if (ver_serv.fail()) {
			        cout << "No hay servicios agregados";
			        exit(1);
			    } else {
			        int serv_elj, c = 0;
			        //////////////////////////
			        /*string texto;
			        int i=1;
			        while (!ver_serv.eof()) {
			        	
			            getline(ver_serv,texto);
			            cout<<texto<<endl;
			            cout<<i<<". "<<endl;
			            i++;
			        }*/
			        while (ver_serv >> servicio >> realizador) {
			        	cout<<c+1<<". "<<endl;
			            s[c] = Taller(servicio, realizador);
			            s[c].mostrarserv();
			            cout<<endl;
			            c++;
			        }
			        ver_serv.close();
			        cout << "\nElija un numero de servicio : ";
			        cin >> serv_elj;
			        
			        if (serv_elj >= 1) {
			            cout << "\n" << s[serv_elj - 1].getnom_servicio();
			            cout<<endl;
			       
						string rep,r;
						cout<<"uso repuestos si/no: ";
						cin>>r;
						if(r=="si"){
							ifstream repuest;
						    repuest.open("categoria_repuesto.txt",ios::in);
							string texto;
							while(!repuest.eof()){
								getline(repuest,texto);
								cout<<texto<<endl;
						    }
						    cin.ignore();
							cout<<"\ningrese los respuestos que uso delimitados por una coma: ";
							getline(cin,rep);
							cout<<"servicio usado correctamente";
						}
						else{
							rep="no se uso repuestos";
					    }
			        } else {
			            cout << "Íopcion invaalida";
			        }

			    }
				cout << "\n\npresione cualquier tecla para volver al menu.";
				getch();
				system("cls");
			    break;
			}
            case 6: {
	            system("cls");
	            string nombreCliente,clientec, producto;
	            int cantidad,dn,dia, mes, anio, horas, minutos,n;
	            ifstream reportec;
	            reportec.open("consumo.txt",ios::in);
	            
	            Consumo csm[100];
	            cout<<"digite la cantidad de clientes que evaluara: ";
	            cin>>n;
	            ofstream reporte;
	            reporte.open("consumo.txt", ios::app);
	            if(reportec.fail()){
		            	cout<<"no se pudo abrir el archivo";
					}
	            for(int l=0;l<n;l++){
	            	cout << "Ingrese el nombre del cliente: ";
		            cin >> nombreCliente;
					cout<<"ingrese el DNI: ";
					cin>>dn;
					//bool cliente_comun=false;
					
					/*if(cliente_comun==1){
						cout<<"el cliente es habitual"<<endl;
					}
					else{
						cout<<"no es cliente habitual"<<endl; 
					}*/
					
					
		            cout << "Ingrese el producto: ";
		            cin >> producto;
		            cout << "Ingrese la cantidad: ";
		            cin >> cantidad;
		            csm[l]=Consumo(nombreCliente,dn, producto, cantidad);
		            
		
						time_t t;
						t = time(NULL);
						struct tm* fecha; // Corrección: se debe declarar como puntero a struct tm
						fecha = localtime(&t);
						dia = fecha->tm_mday;
						mes = fecha->tm_mon + 1;
						anio = fecha->tm_year + 1900;
						horas = fecha->tm_hour;
						minutos = fecha->tm_min;
					
					
					while(reportec>>dia>>horas>>minutos>>clientec>>dn>>producto>>cantidad){
						int r;
						if(dn==dn){
							r=11;
							cout<<"cacacacca";
						}
						else{
							cout<<"dodmoidioididw";
							r=10;
						}
						
						cout<<r<<"<--"<<endl;
				    }
				    
				    reportec.close();
				
				
					clientec=csm[l].getnombrec();
					dn=csm[l].getdni();
					producto=csm[l].getProducto();
					cantidad=csm[l].getCantidad();
					
		            reporte <<"fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl
		                    <<"hora: "<<horas<<":"<<minutos<<endl
					        <<"Cliente: " << clientec<< endl
					        <<"D.N.I: "<<dn<<endl
		                    << "Producto: " << producto << endl
		                    << "Cantidad: " << cantidad << endl
		                    << "................................" << endl;
		            reporte.close();
					cout << "\n\npresione cualquier tecla para volver al menu.";
					getch();
					system("cls");
				} 
					
		    }
            cout << "Consumo agregado correctamente.\n";
            break;
            case 7:{
					exit(1);
			}
        }
        
		opcion=menu();
	}
}