#include<iostream>

using namespace std;


int main(){
	int num;
	cout<<"Informe um numero: ";
	cin>>num;
	if(num%2==0)
		cout<<num<<" eh par."<<endl;
	else
		cout<<num<<" eh impar."<<endl;
	return 0;	
}