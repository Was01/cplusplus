#include<iostream>

using namespace std;

int main(){
	int base,expoente,pot,i;
	pot=1;
	cout<<"Informe o valor da base: ";
	cin>>base;
	cout<<"Informe o valor do expoente: ";
	cin>>expoente;
	for(i=1;i<=expoente;i++){
		pot=base*pot;
		
	}
	cout<<"\nResultado: "<<pot<<endl;
	return 0;
	
}