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

float promedios(int nota[], int sum)
{
	for (int i=0;i<CANTIDAD;i++ )
	{
		sum+=nota[i];
		++i;
	}
	return sum/i;
	
}
void factorial(int nota[])
{
	for (int i=0;i<CANTIDAD;i++)
	{
		int factorial = 1;
		cout<<"Factorial de: "<<nota[i]<<endl;
		for (int j = 1;j<=nota[i];++j)
			factorial *= j;
		cout<<"Es"<<" "<<factorial<<endl;
	}		
}	
int MAXIMO(int nota[])
{
	int maximo = 0;
	for (int i=0;i<CANTIDAD; i++)
	{
		if(maximo<nota[i])
			maximo = nota[i];
		
	}
	return maximo;
}
void listarpares(int nota[])
{
	cout<<"PARES: "<<"\n";
	for ( int i = 0; i<CANTIDAD;i++ )
	{
		if ( nota[i]%2 == 0 )
			cout<<nota[i]<<endl;
	}
}

int main(int argc, char *argv[]) {
	//Declaración de variables
	int nota[5], i; 
	float sum=0;
	entrardatos(nota); //entra datos con funcion
	listardatasos(nota); //lista los datasos
	cout<<"promedio: "<<promedios(nota,sum)<<endl; //promedio, llamando funcion.
	cout<<"Maximo: "<<MAXIMO(nota)<<"\n"; //sacar maximo
	listarpares(nota);
	factorial(nota);
	cout<<endl;
	return 0;
}

