#include <iostream>
using namespace std;

struct Persona{
	char nombre[30];
	char apellido[30];
	int edad;
};

int main(int argc, char *argv[]) {
	Persona p;
	cout<<"Ingresa nombre: ";
	cin.getline(p.nombre, 30);
	cout<<"Ingresa apellido: ";
	cin.getline(p.apellido, 30);
	cout<<"Ingresa edad: ";
	cin>>p.edad;
	cout<<"Los datos son: "<<endl;
	cout<<"nombre: "<<p.nombre<<endl;
	cout<<"apellido: "<<p.apellido<<endl;
	cout<<"edad: "<<p.edad<<endl;	
	return 0;
}

