#include<iostream>
#include<string.h>

using namespace std;

void inverte_string(char nome[]){
	int i,tam;
	tam=strlen(nome);
	for(i=tam;i>=0;i--)
		cout<<nome[i];
}

int main(){
	char nome[]="Washington Fernandes de Barros";
	inverte_string(nome);
	return 0;
}