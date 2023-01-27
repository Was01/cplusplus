#include<iostream>

using namespace std;

int main(){
	int var=10;
	int *p1,*p2;
	int vet[]={1,2,3,4,5,6,7};
	const double pi=3.141592653589;
	int i=0;
	p1=&var;
	p2=&var;
	cout<<p1<<endl;
	cout<<p2<<endl;
	cout<<&var<<endl;
	*p1=15;
	*p2=20;
	cout<<var<<endl;
	cout<<pi<<endl;
	p2=vet;
	cout<<endl;
	while(i<7){
		cout<<*p2<<'\t';
		p2++;
		i++;
	}
	cout<<endl;
	
	return 0;
}