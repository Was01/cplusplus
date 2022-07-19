#include<iostream>

using namespace std;

void mensagem(int idade){
	cout<< "\nIdade: "<<idade<<endl;
}
 void mensagem(string nome){
	 cout<<"Ola "<<nome<<"."<<endl;
 }


int main(){
	int idade;
	string nome;
	cout<<"Informe a idade: ";
	cin>>idade;
	cout<<"Infome o nome: ";
	cin>>nome;
	mensagem(idade);
	mensagem(nome);
	return 0;	
}