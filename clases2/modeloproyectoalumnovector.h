#include<vector>
#include"modeloproyectoalumno.h"
#include<iostream>
using namespace std;
class AlumnoVector
{
private:
	vector<Alumno> vectorAlumno;
public:
	AlumnoVector()
	{
		vector<Alumno> vectorAlumno;
	}
	void add(Alumno obj) /*Agrega objectos al vector uwu*/
	{
		vectorAlumno.push_back(obj);
	}
	Alumno get(int pos)/*Entrega el objecto en la pos actual de la memoria*/
	{
		return vectorAlumno[pos];
	}
	int rows()/*Tamaño actual del vector*/
	{
		return vectorAlumno.size();
	}
	
	int getPostArray(Alumno obj)
	{
		for (unsigned int i = 0; i < vectorAlumno.size(); i++)
		{
			if (obj.getCodigo() == 
				vectorAlumno[i].getCodigo())
			{
				return i;/*Retorna la posicion del 
				elemento dentro del vector*/
			}
		}
	}
	
	Alumno buscarPorCodigo(int codigo)
	{
		for (Alumno x:vectorAlumno)
		{
			if (codigo == x.getCodigo())
			{
				return x;
			}
		}
	}
	
	int getPosArray(Alumno Obj)
	{
		for(int i = 0;i<rows();i++)
		{
			if(Obj.getCodigo() == get(i).getCodigo())
			{
				return i;
			}
			return -1;
		}
	}
	void remove(Alumno Obj)
	{
		vectorAlumno.erase(vectorAlumno.begin()+getPosArray(Obj));
	}
	
};
