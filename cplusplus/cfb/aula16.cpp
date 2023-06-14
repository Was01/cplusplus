#include<iostream>

using namespace std;

int potenciacao(int base,int expoente){
	int pot=1;
	if(expoente==0)
		return 1;
	do{
		pot=pot*base;
		expoente--;	
	}while(expoente>0);
	return pot;
}

int main(){
	int base,expoente;
	cout<<"Base: ";
	cin>>base;
	cout<<"Expoente: ";
	cin>>expoente;
	cout<<"Potencia: "<<potenciacao(base,expoente)<<endl;
	return 0;
}

