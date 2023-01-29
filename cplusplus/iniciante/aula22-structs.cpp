#include<iostream>
#include<string.h>

using namespace std;;

typedef struct{
	char nome[100];
	int idade;
} t_pessoa;


int main(){
	t_pessoa p;
	strcpy(p.nome,"Washington");
	p.idade=42;
	cout<<"Nome: "<<p.nome<<endl;
	cout<<"Idade: "<<p.idade<<endl;
	return 0;
}