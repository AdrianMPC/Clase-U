#include <iostream>
#include <string>
#include "CELULAR.h"
using namespace std;
double Disminuir(){
	return objCelular1.getPrecio() - (objCelular1.getPrecio() * 0.05);
}

int main(int argc, char *argv[]) {
	//variables
	int num;
	string usu;
	double pxs;
	int seg;
	//Ingresar datasos
	cout<<"Numero: "; cin>> num;
	cout<<"Nombre: "; cin>> usu;
	cout<<"Precio por segundo: "; cin>> pxs;
	cout<<"Segundos: "; cin>> seg;
	
	
	Celular objCelular1 (int num, string usu, double pxs, int seg);

	double Disminuir()
	
	cout<<"Numero: "<<objCelular1.getNumero()<<"\t";
	cout<<"Consumo: "<<objCelular1.getConsumo()<<"\t";
	cout<<"IGV: "<<objCelular1.getIGV()<<"\t";
	cout<<"Total: "<<objCelular1.Total()<<"\n";
	cout<<"IGV - 5%: "<<Disminuir();
	
}

