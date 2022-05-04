#include <iostream>
using namespace std;

class Operacion{
	private:
		int numero1, numero2, numero3;
	public:
		Operacion(int n1, int n2, int n3){
			numero1 = n1;
			numero2 = n2;
			numero3 = n3;
		};
		Operacion(){
		};
		~Operacion(){
		};
		//set ( modificador de acceso )
		void setNumero1(int num)
		{
			numero1 = num;
		};
		void setNumero2(int num)
		{
			numero2 = num;
		};
		void setNumero3(int num)
		{
			numero3 = num;
		};
		//get ( modificador de acceso )
		int getNumero1()
		{
			return numero1;
		}
		int getNumero2()
		{
			return numero2;
		}
		int getNumero3()
		{
			return numero3;
		}
		//operaciones
		int getMayor()
		{
			if ( numero1 > numero2 && numero1>numero3 )
			{
				return numero1;
			}
			else if ( numero2>numero1 && numero2>numero3 ) 
			{
				return numero2;
			}
			else
			{
				return numero3;
			}
		}
};
