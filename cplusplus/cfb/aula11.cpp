#include<iostream>

using namespace std;


int main(int argc, char** argv)
{
	int num;
	cout<<"Digite um número inteiro: ";
	cin>>num;
	if((num>=4 && num <7)||(num>10&&num<=13)){
		cout<<"\nNumero no intervalor correto!!!\n";
	}else{
			cout<<"\nNumero fora do intervalo!!!\n";
	}
	return 0;
}