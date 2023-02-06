#include<iostream>
#include<string.h>

#define MAX 10

using namespace std;



class Carro
{
	public:
		char nome[100];
		char cor[20];
		char placa[20];
		double preco;
};

void ordena(Carro carros[],int tam);



int main(){
	Carro carros[MAX];
	int i=0;
	while(true)
	{
		char resp;
		cout<<"Digite o nome do carro: ";
		cin>>carros[i].nome;
		cout<<"\nDigite o preco do carro: ";
		cin>>carros[i].preco;
		cout<<endl;
		i++;
		cout<<"Voce deseja continuar? <s>sim ou <n>nao: ";
		cin>> resp;
		if(resp!='s')
			break;
		cout<< endl;
	}
	cout<< endl;
	ordena(carros,i);
	for (int j=0;j<i;j++)
	{
		cout<<"Nome do carro: "<<carros[j].nome<<endl;
		cout<<"Preco: R$ "<<carros[j].preco<<endl;
		cout<<endl;
	}
	return 0;
}

void ordena(Carro carros[],int tam){
	int i,j;
	Carro aux;
	for(i=0;i<tam-1;i++){
		for(j=i;j<tam;j++){
			if(strcmp(carros[i].nome,carros[j].nome)>0){
				aux=carros[i];
				carros[i]=carros[j];
				carros[j]=aux;
			}
			
		}
	}
}