#include<iostream>
#include <string.h>

using namespace std;

class Pessoa{
	public:
		char nome[100];
		char cpf [20];
		int idade;
};

int main(){
	Pessoa p1;
	cout<<"Digite seu nome: ";
	cin>>p1.nome;
	cout<< "Nome: "<<p1.nome<<endl;
	return 0;
}