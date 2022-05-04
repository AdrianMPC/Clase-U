#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct alumno
	{
	string codigo;
	string nombre;
	string apellidos;
	int edad;
};

int main(int argc, char *argv[]) {
	system("Color a");
	alumno alu[3];
	for (int i = 0; i<3; i++)
	{
		cout<<"Fila: "<<i+1<<" --------------------"<<"\n";
		cout<<"Deberías darme tu codigo NOW: ";
		getline(cin,alu[i].codigo);
		
		cout<<"Deberías darme tu nombre NOW: ";
		getline(cin,alu[i].nombre);
		
		cout<<"Deberías darme tu apellido NOW: ";
		getline(cin,alu[i].apellidos);
		
		cout<<"pon tu edad: ";
		cin>>alu[i].edad;
		cin.ignore();
		system("cls");
	}
	for(int i = 0; i<3;i++)
	{
		cout<<"Codigo: "<<alu[i].codigo<<endl;
		cout<<"Nombre: "<<alu[i].nombre<<endl;
		cout<<"Apellido: "<<alu[i].apellidos<<endl;
		cout<<"Edad: "<<alu[i].edad<<endl;
	}
	
	return 0;
}

