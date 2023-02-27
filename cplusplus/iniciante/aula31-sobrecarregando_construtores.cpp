#include<iostream>

using namespace std;

class Carro{
	public:
		int ano;
		
		Carro()
		{
			ano=0;
		}
		
		Carro(int ano)
		{
			this->ano=ano;
		}
};


int main(){
	Carro c1;
	Carro c2(2014);
	cout<<"Ano do Carro 1: "<<c1.ano<<endl;
	cout<<"Ano do Carro 2: "<<c2.ano<<endl;
	return 0;
}