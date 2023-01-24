#include<iostream>

int num_global=12;
using namespace std;
void foo(){
	int num=10;
	static int num_static=1;
	cout<<num<<endl;
	cout<<num_global<<endl;
	cout<<num_static<<endl;
	num_static++;
}

int main(){
	foo();
	foo();
	foo();
	return 0;
}