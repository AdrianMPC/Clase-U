#include <iostream>
#include <vector>
#include <stdlib.h>
#include "modeloproyectoalumnovector.h"
using namespace std;
AlumnoVector alumnovector; //Instancia de la clase de alumnovector
Alumno alumno; //instancia de vectores
//PROTOTIPOS
void AdicionarOpciones(){
	
	//Ingresa variables
	int cod;
	string nom;
	string rpta;
	do
	{
		//ingresar datos
		cout<<"Codigo: "; cin>>cod;
		cin.ignore();
		cout<<"Nombres: "; cin>>nom;
		cin.ignore();
		//crea objecto de la clase
		Alumno alumno;
		alumno.setCodigo(cod);
		alumno.setNombre(nom);
		alumnovector.add(alumno);
		cout<<" Para continuar escriba SI"<<"\n";
		cin>>rpta;
	}	
	while (rpta == "SI");
}

void EliminarOpciones()
{

}
void ModificarAlumnos()
{
	
}
void BuscarAlumnos()
{
	
}
void ListarAlumnos()
{
	for (int i=0;i<alumnovector.rows();i++)
	{
		cout<<"Alumno: "<<alumnovector.get(i).getCodigo()<<"\n";
		cout<<"Alumno: "<<alumnovector.get(i).getNombre()<<"\n";
	}
}
	

void MenudeOpciones()
{
	int opt;
	cout<<"//////////////////MENU DE OPCIONES//////////////////"<<endl;
	cout<<"Ingresar nuevos alumnos  [1]"<<endl;
	cout<<"Eliminar nuevos alumnos  [2]"<<endl;
	cout<<"Modificar nuevos alumnos [3]"<<endl;
	cout<<"Buscar nuevos alumnos    [4]"<<endl;
	cout<<"Listar nuevos alumnos    [5]"<<endl;
	cout<<"Salir                    [6]"<<endl;
	cout<<"//////////////////MENU DE OPCIONES//////////////////"<<endl;
	cout<<"Ingrese una opción[1-5]"<<endl;
	cin>>opt;
	do
	{
		switch( opt )
		{
		case 1:system("cls");
		AdicionarOpciones(); 
		break;
		case 2:system("cls");
			   EliminarOpciones(); 
			   break;
		case 3:system("cls");
		       ModificarAlumnos();
		       break;
		case 4:system("cls");
		       BuscarAlumnos(); 
			   break;
		case 5:system("cls");
			   ListarAlumnos(); 
		       break;
		case 6:system("cls");
		       cout<<"#######Gracias por tu compra!#######";
		       exit(0);
		       break;
		default: cout<<"Ingresa un numero correcto [1-5]";
		}
		cout<<"Continuar? (SI)";
	}
	while (opt != 6);
}

int main(){
	MenudeOpciones();
}
