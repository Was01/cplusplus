# include<iostream>
#include <string.h>

/* Programa para inverter strings utilizando ponteiros*/

using namespace std;

int main(){
	char nome[]="Maria da Silva";
	int tam;
	char *p,*pini;
	tam=strlen(nome);
	p=&nome[tam-1];
	pini=&nome[0];
	
	while(true){
		cout<< *p;
		if(p==pini){
			break;
		}
		p--;
	}
	cout<<endl;
	return 0;
}