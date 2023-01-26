#include<iostream>

using namespace std;

int main(){
	int array[]={1,2,3,4,5};
	int *parray;
	parray=array;
	int i=0;
	while(i<5){
		cout<<*parray<<endl;
		parray++;
		i++;
	}
	return 0;
}