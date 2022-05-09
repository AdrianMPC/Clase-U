#include <iostream>
#include <vector>
#include "modeloproyectoalumnovector.h"
using namespace std;
AlumnoVector alumnovector; //Instancia de la clase de alumnovector
int main(int argc, char *argv[]) {
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
	for (int i=0;i<alumnovector.rows();i++)
	{
		cout<<"Alumno: "<<alumnovector.get(i).getCodigo()<<"\n";
		cout<<"Alumno: "<<alumnovector.get(i).getNombre()<<"\n";
	}
	return 0;
}

