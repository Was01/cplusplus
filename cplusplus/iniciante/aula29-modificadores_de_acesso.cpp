#include<iostream>
#include<string.h>
using namespace std;

class Linguagem{
	
	friend void classeAmiga(Linguagem* l);

protected:
	char nome[100];
	
	void mostrarNome()
	{
		cout<<"Nome: "<<this->nome<<endl;
	}

public:
		
   void setNome(char nome[])
   {
		strcpy(this->nome,nome);
	}
};

void classeAmiga(Linguagem* l){
	l->mostrarNome();
}

int main(){
	Linguagem l;
	char nome[]="Linguagem C++";
	l.setNome(nome);
	classeAmiga(&l);
	return 0;
}