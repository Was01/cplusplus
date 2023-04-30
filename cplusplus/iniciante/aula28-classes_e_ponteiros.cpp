#include<iostream>

using namespace std;

class Conta{
	public:
		int numero;
		double saldo;

		void depositar(double quantidade);
		void retirar(double quantidade);
		void transferir(Conta *destino,double valor);
		double getSaldo();
		int getNumero();
		
};



Conta *novaConta(int numero,double saldo){
	Conta *c=new Conta;
	c->numero=numero;
	c->saldo=saldo;
	return c;
}

int main()
{
	Conta *c1,*c2;
	c1=novaConta(1,500);
	c1->depositar(30);
	c2=novaConta(2,300);
	c2->depositar(50);
	cout<<"Numero da conta: "<<c1->getNumero()<<endl;
	cout<<"Saldo da conta: "<<c1->getSaldo()<<endl;
	cout<<"\nNumero da conta: "<<c2->getNumero()<<endl;
	cout<<"Saldo da conta: "<<c2->getSaldo()<<endl;
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

double Conta:: getSaldo(){
	return this->saldo;
}

int Conta::getNumero(){
	return this->numero;
}