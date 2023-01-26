#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char nome[100];
	char *p,*pini;
	int tam;
	cout<<"Digite uma palavra: ";
	cin>>nome;
	tam=strlen(nome);
	p=&nome[tam-1];
	pini=&nome[0];
	while(true){
		cout<<*p;
		if(p==pini)
			break;
		p--;
	}
	cout<<endl;
	return 0;
}