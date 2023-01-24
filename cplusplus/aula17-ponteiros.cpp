#include<iostream>

using namespace std;

void foo(int *n){
	*n=20;
}

int main(){
	int var=10;
	int * pvar;
	pvar=&var;
	cout<<*pvar<<endl;
	foo(&var);
	cout<<var<<endl;
	return 0;
}