#include<iostream>

using namespace std;

int par(int n){
	if(n%2==0)
		return true;
	return false;
}

int main(){
	int num;
	cout<<"Digite um numero: ";
	cin>>num;
	if(par(num))
		cout<<num<<" eh par."<<endl;
	else
		cout<<num<<" eh impar."<<endl;
	return 0;
}