#include<iostream>

using namespace std;


int main(){
	int n1,n2,nota;
	string res;
	cout<<"Digite a primeirsa nota: ";
	cin>>n1;
	cout<<"Digite a segunda nota: ";
	cin>>n2;
	nota=n1+n2;
	res=(nota>=60)?"Aprovado":"Reprovado"; //Operador tern�rio
	cout<<"\nSituacao: "<<res<<endl;
	return 0;
	
}