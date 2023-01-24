#include <iostream>

using namespace std;

int main(){
	int resp;
	int num;
	cout<<"Digite um numero: ";
	cin>>num;
	resp=num%2;
	switch(resp){
		case 1:
			cout<<num<<" eh impar."<<endl;
			break;
		case 0:
			cout<<num<<" eh par."<<endl;
			break;
	}
	return 0;
	
}