#include<iostream>

using namespace std;

typedef struct{
	char nome[30];
	int idade;
} t_pessoa;

int main(){
	t_pessoa pessoas[100];
	t_pessoa* p;
	p=pessoas;
	for (int i=0;i<3;i++){
		cout <<"Digite seu nome: ";
		cin>>p->nome;
		cout<<"Digite sua idade: ";
		cin>>p->idade;
		p++;
	}
	p=pessoas;
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<p->nome<<endl;
		cout<<p->idade<<endl;
		p++;
		cout<<endl;
	}
	return 0;
}