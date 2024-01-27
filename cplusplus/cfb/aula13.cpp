#include<iostream>

using namespace std;

int main(){
	int val;
	cout<<"[1]Verde, [2]Azul, [3]Vermelho\n\n";
	cin>>val;
	switch(val){
		case 1:
			cout<<"Cor selecionada verde\n";
			break;
		case 2:
			cout<<"Cor selecionada azul\n";
			break;
		case 3:
			cout<<"Cor selecionada vermelho\n";
			break;
		default:
			cout<<"Valor selecionado invalido!!!\n"<<endl;
	}
	return 0;
}