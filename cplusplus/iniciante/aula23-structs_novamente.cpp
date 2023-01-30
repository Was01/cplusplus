#include<iostream>

using namespace std;

typedef struct{
	int idade;
	void set_Idade(int idade){
		this->idade=idade;
	}
	int get_Idade(){
		return this->idade;
	}
}Pessoa;

int main(){
	Pessoa p;
	p.set_Idade(42);
	cout<<p.get_Idade()<<endl;
	return 0;
}