#include<iostream>
#include<string.h>


using namespace std;

class Pessoa
{
	protected:
		char nome[100];
		int idade;
		int * filhos;
    public:
    	Pessoa(const char* nome,int idade){
			strcpy(this->nome,nome);
			this->idade=idade;
			filhos=new int[10];
			cout<<"Entrou no construtor..."<<nome<<endl;
		}
		
		void getNome(){
			cout<<"Nome: "<<this->nome<<endl;
		}
		
		void getIdade(){
			cout<<"Idade: "<<this->idade<<" anos."<<endl;
		}
		~Pessoa(){
			cout<<"Entrou no destrutor..."<<nome<<endl;
			delete[] filhos;
		}
    
};

int main(){
	Pessoa  p[3]=
	{	
		{"Washington",41},{"Suelen",32},{"Samara",29}
	};
	

	return 0;
}