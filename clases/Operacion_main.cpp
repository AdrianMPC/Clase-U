#include <iostream>
#include "operacion.h"
using namespace std;

int main(int argc, char *argv[]) {
	//declarando variables
	int n1,n2,n3;
	//ingreso de datasos
	cout<<"Ingresar nota 1: "; cin>>n1;
	cout<<"Ingresar nota 2: "; cin>>n2;
	cout<<"Ingresar nota 3: "; cin>>n3;
	//creando objecto1
	Operacion objOperacion1(n1,n2,n3);
	//imprimiendo
	cout<<" Notas: #1 - "<< objOperacion1.getNumero1()<<"\t"<<"#2 - "<< objOperacion1.getNumero2()<<"\t"<<"#3 - "<< objOperacion1.getNumero3()<<"\n";
	cout<<" Mayor: "< <objOperacion1.getMayor();
	return 0;
}

