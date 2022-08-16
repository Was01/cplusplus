#include<iostream>
#include<string.h>

using namespace std;


void foo(int *n){
	*n=20;
}

int main(){
	int v[]={1,1,2,3,5,8};
	int *vet=&v[0];
	int i=0;

	while(i<6){
		cout<<*vet<<' ';
		i++;
		vet++;
	}
	delete [] vet;
	vet=NULL;

	return 0;
}
