#include <iostream>
using namespace std;
int const CANTIDAD = 5;
void entrardatos(int nota[])
{
	for ( int i=0;i<CANTIDAD;i++ )
	{
		cout<<"Ingresar nota #"<<i+1<<": ";
		cin>>nota[i];
	}
}

void listardatasos(int nota[])
{
	cout<<"Listar notas:"<<endl;
	for ( int i=0;i<CANTIDAD;i++ )
	{
		cout<<nota[i]<<" ";
	}
	cout<<endl;
}	

float promedios(int nota[], int sum,int i)
{
	for (i=0;i<CANTIDAD;i++ )
	{
		sum+=nota[i];
		++i;
	}
	return sum/i;
	
}
int MAXIMO(int nota[])
{
	for (int i=0;i<CANTIDAD; i++)
	{
		if(nota[0]<nota[i])
			nota[0] = nota[i];
		
	}
	return nota[0];
}

int main(int argc, char *argv[]) {
	//Declaración de variables
	int nota[5], i; 
	float sum=0;
	entrardatos(nota); //entra datos con funcion
	listardatasos(nota); //lista los datasos
	cout<<"promedio: "<<promedios(nota,sum,i)<<endl;
	cout<<"Maximo: "<<MAXIMO(nota);
	cout<<endl;
	return 0;
}

