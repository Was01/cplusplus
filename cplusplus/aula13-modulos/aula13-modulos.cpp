#include<iostream>
#include "modulos.h"
using namespace std;

int main(){
	int n;
	cout<<"Digite um numero: ";
	cin>>n;
	cout<<"Fatorial: "<<fatorial(n)<<endl;
	cout<<"Area do quadrado: "<<area_quadrado(n)<<endl;
	return 0;
	
}