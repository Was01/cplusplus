#include <iostream>
using namespace std;

class Pessoa
{
	public:
		char nome[100];
		char cpf[20];
		int idade;
};




int main(int argc, char *argv[])
{
	Pessoa pessoas[3]={
				{"Joao","11111111111",30},
				{"Maria","22222222222",20},
				{"Pedro","33333333333",25} };
	Pessoa* ppessoa;
	int i;
	ppessoa=pessoas;
	for(i=0;i<3;i++)
	{
		cout<<"Nome: "<<ppessoa->nome<<endl;
		cout<<"CPF: "<<ppessoa->cpf<<endl;
		cout<<"Idade: "<<ppessoa->idade<<endl;
		cout<<endl;
		ppessoa++;
		
	}
		
	return 0;
}