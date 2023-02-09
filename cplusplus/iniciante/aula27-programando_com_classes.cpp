#include<iostream>

using namespace std;

class Conta{
	public:
		int numero;
		double saldo;

		void depositar(double quantidade);
		void retirar(double quantidade);
		void transferir(Conta *destino,double valor);
};


int main(){
	Conta c1,c2;
	Conta *pc1,*pc2;
	pc1=&c1;
	pc2=&c2;
	pc1->numero=1;
	pc1->saldo=1000;
	pc2->numero=2;
	pc2->saldo=0;
	
	
	c1.depositar(800);
	c1.transferir(&c2,600);
	c2.retirar(10);
	cout<<"Saldo da primeira conta: "<<c1.saldo<<endl;
	cout<<"Saldo da segunda  conta: "<<c2.saldo<<endl;
	return 0;
}

void Conta::depositar(double quantidade)
{
	if(quantidade>=0)
		this->saldo+=quantidade;
}
	
	
void Conta:: retirar(double quantidade)
{
	if(saldo>=quantidade)
	{
		this->saldo-=quantidade;
	}
}

	
void Conta:: transferir(Conta *destino, double valor)
{
	this->retirar(valor);
	destino->depositar(valor);
}