#include<iostream>

using namespace std;

bool par(int );


int main(){
	int n;
	cout<<"Digite um numero: ";
	cin>> n;
	if(par(n))
		cout<< "\nO numero "<<n<< " e par."<<endl;
	else
		cout<< "\nO numero "<<n<< " e impar."<<endl;
}

bool par(int n){
	if(n%2==0)
		return true;
	return false;
}