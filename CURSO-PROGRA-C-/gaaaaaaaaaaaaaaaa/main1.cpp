#include <iostream>
#include <string.h>
#include "Usuario.cpp"
#include "Cliente.cpp"
#include "Negocio.cpp"

using namespace std;

void menu()
{
    cout << "\nBienvenido a KeepItSafe" << endl << endl;
    cout << "Selecciona la opcion que necesites:\n" << endl;
    cout << "1. Crear cuenta personal" << endl;
    cout << "2. Crear cuenta de negocios" << endl;
    cout << "3. Iniciar sesion" << endl;
    cout << "4. Agregar Tarjeta" << endl;
    cout << "5. Imprimir usuario"<<endl;
    cout << "6. Salir" << endl;
}

Usuario Registro()
{
    Usuario registro1;
    string nombreUsuario, apellidoUsuario, genero, nacionalidad, cumpleaniosUsuario, correoUsuario, contrasenaUsuario;
    int edad;

    cout << "Introduce tu primer nombre: " << endl;
    cin >> nombreUsuario;
    registro1.setNombreUsuario(nombreUsuario);
    cout << "Introduce tu primer apellido: " << endl;
    cin >> apellidoUsuario;
    registro1.setApellidoUsuario(apellidoUsuario);
    cout << "Introduce tu género: " << endl;
    cin >> genero;
    registro1.setGenero(genero);
    cout << "Introduce tu edad: " << endl;
    cin >> edad;
    registro1.setEdad(edad);
    cout << "Introduce tu nacionalidad: " << endl;
    cin >> nacionalidad;
    registro1.setNacionalidad(nacionalidad);
    cout << "Introduce tu cumpleaños en formato AAAA-MM-DD: " << endl;
    cin >> cumpleaniosUsuario;
    registro1.setCumpleaniosUsuario(cumpleaniosUsuario);
    cout << "Introduce tu correo electronico: " << endl;
    cin >> correoUsuario;
    registro1.setCorreoUsuario(correoUsuario);
    cout << "Introduce tu contraseña: " << endl;
    cin >> contrasenaUsuario;
    registro1.setContrasenaUsuario(contrasenaUsuario);
    return registro1;
}

void IniciarSesion()
{
    Cliente login;
    string correoUsuario, contrasenaUsuario, responsableTarjeta, numTarjeta, fechaDeVencimiento, CVV;
    
    cout << "Introduce tu correo electronico: " << endl;
    login.getCorreoUsuario();
    cout << "Introduce tu contrasenia: " << endl;
    login.getContrasenaUsuario();
    cout << "\nPorfavor ingresa tus datos bancarios: \n" << endl;
    cout << "Introduce el nombre del responsable de la tarjeta: " << endl;
    cin >> responsableTarjeta;
    login.setNombreResponsableTarjeta(responsableTarjeta);
    cout << "Introduce tu numero de tarjeta: " << endl;
    cin >> numTarjeta;
    login.setNumeroTarjeta(numTarjeta);
    cout << "Introduce la fecha de vencimiento de la tarjeta:" << endl;
    cin >> fechaDeVencimiento;
    login.setFechaVencimiento(fechaDeVencimiento);
    cout << "Introduce tu CVV:" << endl;
    cin >> CVV;
    login.setCVV(CVV);
}

void CuentaNegocios()
{
    Negocio cuenta;
    string nombreNegocio, numerotelefonico, curp, rfc, correoNegocio, contrasenaNegocio, responsableTarjeta, numTarjeta, fechaDeVencimiento, CVV;

    cout << "Introduce el nombre de tu negocio: " << endl;
    cin >> nombreNegocio;
    cuenta.setNombreNegocio(nombreNegocio);
    cout << "Introduce el numero telefonico de tu negocio: " << endl;
    cin >> numerotelefonico;
    cuenta.setNumeroTelefonico(numerotelefonico);
    cout << "Introduce el CURP:" << endl;
    cin >> curp;
    cuenta.setCurp(curp);
    cout << "Introduce el RFC:" << endl;
    cin >> rfc;
    cuenta.setRfc(rfc);
    cout << "Introduce tu numero de tarjeta: " << endl;
    cin >> numTarjeta;
    cuenta.setNumeroTarjeta(numTarjeta);
    cout << "Introduce la fecha de vencimiento de la tarjeta: " << endl;
    cin >> fechaDeVencimiento;
    cuenta.setFechaDeVencimiento(fechaDeVencimiento);
    cout << "Introduce tu CVV: " << endl;
    cin >> CVV;
    cuenta.setCVV(CVV);
}

void Tarjetas()
{
    Cliente tarjeta;
    string responsableTarjeta, numTarjeta, fechaVencimiento, CVV;

    cout << "\nPorfavor ingresa tus datos bancarios: \n" << endl;
    cout << "Introduce el nombre del responsable de la tarjeta" << endl;
    cin >> responsableTarjeta;
    tarjeta.setNombreResponsableTarjeta(responsableTarjeta);
    cout << "Introduce tu numero de tarjeta: " << endl;
    cin >> numTarjeta;
    tarjeta.setNumeroTarjeta(numTarjeta);
    cout << "Introduce la fecha de vencimiento de la tarjeta" << endl;
    cin >> fechaVencimiento;
    tarjeta.setFechaVencimiento(fechaVencimiento);
    cout << "Introduce tu CVV" << endl;
    cin >> CVV;
    tarjeta.setCVV(CVV);
}

void ImprimeUsuario(Usuario registro)
{
    cout << "\nDatos Usuario: " << endl;
    cout << "Nombre: "<<registro.getNombreUsuario()<< endl;
    cout << "Apellido: "<<registro.getApellidoUsuario()<< endl;
    cout << "Edad: " <<registro.getEdad()<< endl;
    cout << "Nacionalidad: "<<registro.getNacionalidad()<<endl;
}

int main()
{
    char opcion;
    Usuario registro1;

    do{
    	menu();
    	cout << "Selecciona la opcion que necesites: "; cin >> opcion;

    if(opcion == '1')
        registro1 = Registro();

    else if(opcion == '2')
        CuentaNegocios();

    else if(opcion == '3')
        IniciarSesion();

    else if(opcion == '4')
        Tarjetas();
    
    else if(opcion == '5')
        ImprimeUsuario(registro1);

    }while(opcion != '6' || (opcion < '0' || opcion > '9'));
}
