#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cstdio>

using namespace std;


void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
	string nomes[30];
	int i,j;
	i=0;
	char resp;
	while(true){
		cout<<"Nome: ";
		getline(cin,nomes[i]);
		i++;
		cout<<"\nDeseja continuar? <s> sim <n> nao: ";
		cin>>resp;
		cout<<endl;
		if(resp!='s')
			break;
		getchar();
		system("cls");
	}
	bubbleSort(nomes,i);
	system("cls");
   	cout<<"Foram digitados "<<i<<" nome(s)."<<endl;
	cout<<"\nLista de nomes ordenanda.\n"<<endl;
	for(j=0;j<i;j++){
		cout<<nomes[j]<<endl;
	}
	return 0;
}