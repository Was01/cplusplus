#include <iostream>
#include<string.h>

using namespace std;

class Pessoa{
	public:
		char nome[100];
		char cpf[20];
		int idade;
};

int main(int argc, char *argv[])
{
	Pessoa p1;
	strcpy(p1.nome,"Washington Fernandes de Barros");
	strcpy(p1.cpf,"294.780.388.42");
	p1.idade=42;
	cout<<"Nome: "<<p1.nome<<endl;
	cout<<"CPF: "<<p1.cpf<<endl;
	cout<<"Idade: "<<p1.idade<<" anos."<<endl;
	
	return 0;
}