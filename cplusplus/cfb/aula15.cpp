#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int numero,i,qtd;
	cout<<"Quantidade de primos: ";
	cin>>qtd;
	cout<<"\n\n";
	numero=1;
	qtd-=1;
	while (qtd>=0){
		i=2;
		while(i<numero){
			if(numero%i==0)
				break;
			i+=1;
		}
		
		if((numero==2)||(i==numero)){
			cout<<numero<<"\t";
			qtd-=1;
		}
		numero++;

	}
		return 0;
}