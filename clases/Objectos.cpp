#include <iostream>
#include "alumno.h"
using namespace std;

int main(int argc, char *argv[]) {
	//constructor
	//crear objecto1 
	Alumno objAlumno1 ("C001","Daniel Pero",20,15);
	//imprimir
	cout<<"Nombre: " <<objAlumno1.getNomApe()<<"\t";
	cout<<"Codigo: " <<objAlumno1.getCodigo()<<"\t";
	cout<<"Nombre: " <<objAlumno1.getPc1()<<"\t";
	cout<<"Nombre: " <<objAlumno1.getPc2()<<"\t";
	cout<<"Promedio alumno1: "<<objAlumno1.getPromedio()<<"\n";
	//crear objecto2
	Alumno objAlumno2 ( "C002","Daniel Díaz",19,14 );
	//imprimir
	cout<<"Nombre: " <<objAlumno2.getNomApe()<<"\t";
	cout<<"Codigo: " <<objAlumno2.getCodigo()<<"\t";
	cout<<"Nombre: " <<objAlumno2.getPc1()<<"\t";
	cout<<"Nombre: " <<objAlumno2.getPc2()<<"\t";
	cout<<"Promedio alumno2: "<<objAlumno2.getPromedio()<<"\n";
	
	return 0;
}

