
#include <iostream>
#include <stdlib.h>
#include <fstream>   //LIBRERIA PARA EL MANEJO DE ARCHIVOS

using namespace std;

void escribir ();	// FUNCION A CREAR MAS ADELANTE

// CUERPO DEL PROGRAMA
int main () 

{
	escribir();
	
	system("pause");
	return 0;
}
// funcion para crear el achivo
void escribir ()
{
	ofstream miarchivo;	//VARIABLE TIPO ARCHIVO
	string nombre_archivo;	//VARIABLE TIPO CADENA DE CARACTERES PARA EL NOMBRE DEL ARCHIVO 
	string texto_archivo; 	// VARIABLE TIPO CADENA DE CARACTERES PARA CAPTURAR EL TEXTO DEL USUARIO
	
	cout << "\nESCRIBE EL NOMBRE PARA EL ARCHIVO:";	//TEXTO EN PANTALLA
	getline(cin, nombre_archivo);					// CONSEGUIR Y CAPTURAR EL NOMBRE DEL ARCHIVO QUE EL USUARIO ESCRIBA
	
	
	//NOMBRE ARCHIVO= BOLETA DE PAGO
	miarchivo.open(nombre_archivo.c_str(), ios::out); //MANIPULAR LA CADENA DE CARACTERES Y DARLE ESE NOMBRE
	
	if (miarchivo.fail())
	{
		cout << "Error al abrir el archivo";
		exit(1);
	}
	
	cout << "\n ESCRIBE EL TEXTO A GUARDAR EN EL ARCHIVO";  //MENSAJE EN PANTALLA
	getline(cin, texto_archivo);	//CAPTURAMOS EL TEXTO QUE ESCRIBA EL USUSARIO PARA GUARDARLO MAS ADELANTE 
	
	miarchivo<< texto_archivo;	//SE ESCRIBA EN EL ARCHIVO EL TEXTO QUE EL USUARIO INGRESO
	
	miarchivo.close(); //cerrar archivo
	
}