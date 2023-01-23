#include<iostream>

using namespace std;

	void mensagem(int n){
		cout<<"Numero: "<<n<<endl;
	}
	void mensagem(){
		cout<<"Hello World!!!"<<endl;
	}

int main(){
	mensagem(10);
	mensagem();
	return 0;
}