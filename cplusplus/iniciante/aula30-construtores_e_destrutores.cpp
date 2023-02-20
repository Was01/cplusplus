#include<iostream>
#include<string.h>


using namespace std;

class Pessoa
{
	protected:
		char nome[100];
		int idade;
		
    public:
    	Pessoa(char nome [],int idade){
			strcpy(this->nome,nome);
			this->idade=idade;
		}
		
		void getNome(){
			cout<<"Nome: "<<this->nome<<endl;
		}
		
		void getIdade(){
			cout<<"Idade: "<<this->idade<<" anos."<<endl;
		}
    
};

int main(){
	char nome[]="Washington Fernandes de Barros";
	Pessoa p(nome,41);
	p.getNome();
	p.getIdade();
	return 0;
}