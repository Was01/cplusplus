#include<iostream>

using namespace std;

class Conta{
	public:
		int numero;
		double saldo;
		
		void depositar(double quantidade)
		{
			if(quantidade>=0)
				this->saldo+=quantidade;
		}
		
		void retirar(double quantidade){
			if(saldo>=quantidade){
				this->saldo-=quantidade;
			}
		}
		
		void transferir(Conta *destino, double valor){
			this->retirar(valor);
			destino->depositar(valor);
		}
};

int main(){
	Conta c1,c2;
	c1.saldo=0;
	c2.saldo=0;
	c1.depositar(500);
	c1.transferir(&c2,300);
	c2.retirar(50);
	cout<<"Saldo da primeira conta: "<<c1.saldo<<endl;
	cout<<"Saldo da segunda  conta: "<<c2.saldo<<endl;
	return 0;
}