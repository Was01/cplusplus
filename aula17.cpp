#include<iostream>
#include<string.h>

using namespace std;

void foo(int *n){
	*n=20;
}

int main(){
	int *vet=new int[10];
    for (int i=0;i<6;i++){
    	cout<< "Digite um numero: ";
 		cin >> *(vet+i);
	}

	for (int i=0;i<6;i++){
		cout<<*(vet+i)<<endl;
	}
	delete [] vet;
	vet=NULL;

	return 0;
}
