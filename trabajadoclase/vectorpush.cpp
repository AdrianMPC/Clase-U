#include <iostream>
#include <vector>

using namespace std;

struct vendedor
{
	string codigo;
	string nombre;
	string apellidos;
	int edad;
	float sueldo;
};

int main()
{
	string rpta;
	// creando el vector DINAMICo (siguiendo ejemplo de profesor)
	vector<vendedor> vectorVendedor;
	
	// objetos para almacenar datos, solo es uno por uno tho
	//adicionando el primer objecto
	do
	{
		vendedor objVendedor1;
		objVendedor1.codigo 	 = "C001";
		objVendedor1.nombre	 	 = "Pepito";
		objVendedor1.apellidos	 = "Papa";
		objVendedor1.edad 		 = 40;
		objVendedor1.sueldo      = 2000;
	
		//asigna el objecto a la posicion 1
		vectorVendedor.push_back(objVendedor1);
		cout<<"Para continuar registrando ve: ";
	}
	
	//adicionando el segundo objecto
	vendedor objVendedor2;
	objVendedor2.codigo 	 = "C002";
	objVendedor2.nombre	 	 = "Ariano";
	objVendedor2.apellidos	 = "Pape";
	objVendedor2.edad 		 = 30;
	objVendedor2.sueldo      = 3000;
	
	//asigna el objecto a la posicion 2
	vectorVendedor.push_back(objVendedor2);
	
	//lista elementos del vector
	for ( unsigned int i = 0;i < vectorVendedor.size();i++ )
	{
		cout<<vectorVendedor[i].codigo<<" "<<"\t";
		cout<<vectorVendedor[i].nombre<<" "<<"\t";
		cout<<vectorVendedor[i].apellidos<<"  "<<"\t";
		cout<<vectorVendedor[i].edad<<"  "<<"\t";
		cout<<vectorVendedor[i].sueldo<<" "<<"\n";
	}
	
	cout<<"Imprimir forma 2:"<<"\n";
	for (vendedor rows:vectorVendedor)
	{
		cout<<rows.codigo<<"-"<<rows.nombre<<"-"<<rows.apellidos<<"-"<<rows.edad<<"-"<<rows.sueldo<<"\n";
	}
}
