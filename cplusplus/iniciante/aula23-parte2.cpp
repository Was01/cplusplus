#include<iostream>

using namespace std;

struct Pessoa{

private:
	int idade;
	
public:
	Pessoa(int idade);
	void set_Idade(int idade){
		this->idade=idade;
	}
	
	int get_Idade(){
		return this->idade;
	}
	
	
};

Pessoa::Pessoa (int idade){
	   this->idade=idade;	
}


int main(){
	Pessoa p(20);
	p.set_Idade(42);
	cout<<p.get_Idade()<<endl;
	return 0;
	
}