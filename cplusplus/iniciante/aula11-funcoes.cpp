#include<iostream>

using namespace std;


int fatorial(int n){
	int i,fat;
	fat=1;
	for(i=1;i<=n;i++){
		fat=fat*i;
	}
	return fat;
}

int main(){
	int n;
	cout<<"Informe um número natural: ";
	cin>>n;
	cout<<"Fatorial: "<<fatorial(n)<<endl;
	return 0;	
}