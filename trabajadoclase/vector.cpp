#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero = 10;
	int* puntero = &numero;	
	cout<<"El numero es: "<<numero<<endl;
	cout<<"La dirección de la memoria del numero es: "<<&numero<<endl;
	cout<<"El valor del puntero es: "<<puntero<<endl;
	
	return 0;
}

