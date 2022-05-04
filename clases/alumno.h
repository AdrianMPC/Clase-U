#include<iostream>
#include<string>
using namespace std;

class Alumno{
	private:
		string codigo;
		string nombre;
		float pc1;
		float pc2;
	public:
		//constructor 
		Alumno(string, string, float, float);
		//set
		void setCodigo(string cod);
		void setNomApe(string nApe);
		void setN1(float n1);
		void setN2(float n2);
		//get
		string getCodigo();
		string getNomApe();
		float getPc1();
		float getPc2();
		//operacion
		float getPromedio();
};
//constructor implementacion
Alumno::Alumno(string cod, string nApe, float n1, float n2)
{
	this->codigo = cod;
	this->nombre = nApe;
	pc1 = n1;
	pc2 = n2;
}

//set
void Alumno::setCodigo(string cod)
{
	this->codigo = cod;
}
void Alumno::setNomApe(string nApe)
{
	this->nombre = nApe;
}
void Alumno::setN1(float n1)
{
	pc1 = n1;
}
void Alumno::setN2(float n2)
{
	pc2 = n2;
}


//get
string Alumno::getNomApe()
{
	return this->nombre;
}
string Alumno::getCodigo()
{
	return this->codigo;
}
float Alumno::getPc1()
{
	return this-> pc1;
}
float Alumno::getPc2()
{
	return this-> pc2;
}



//operacion
float Alumno::getPromedio()
{
	return (this->pc1 + this->pc2)/2;
}
