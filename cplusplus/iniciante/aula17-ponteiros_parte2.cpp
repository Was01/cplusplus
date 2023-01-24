#include<iostream>

using namespace std;

int main(){
	int *vet=new int[10];
	*(vet+0)=10;
	*(vet+1)=20;
	cout<<*(vet+0)<<endl;
	cout<<*(vet+1)<<endl;
	delete[]vet;
	return 0;
}