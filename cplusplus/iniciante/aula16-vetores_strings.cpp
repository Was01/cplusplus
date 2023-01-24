#include<iostream>
#include<string.h>

using namespace std;

void inverte(char nome[]){
	int tam,i;
	tam=strlen(nome);
    for(i=tam-1;i>=0;i--)
    	cout<<nome[i];
}

int main(){
	char nome[]="Amanda";
	inverte(nome);
	return 0;
}