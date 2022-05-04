#include <iostream>
#include <string>
using namespace std;

class Celular{
	private:
		int numero;
		string usuario;
		double precioxsegundo;
		int segundo;
	public:
	//contrusctor
		Celular(int num, string usu, double pxs, int seg)
		{
			numero = num;
			usuario = usu;
			precioxsegundo = pxs;
			segundo = seg;
		}
		Celular(){
		}
		~Celular(){
		}
	//get ( modificador de acceso )
		int getNumero()
		{
			return numero;
		}
		string getUsuario()
		{
			return usuario;
		}
		double getPrecio()
		{
			return precioxsegundo;
		}
		int getSegundo()
		{
			return segundo;
		}
	//operaciones
		double getConsumo(){
			return precioxsegundo * segundo;
		}
		int getIGV(){
			return getConsumo() * 0.18;
		}
		int getTotal(){
			return getConsumo() * getIGV();
		}
};


