#include<iostream>
#include "modulo.h"

using namespace std;
int main()
{
	int n=12;
	for (int i=1;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<combinacao(i,j)<<"	";
		}
		cout<<endl;
	}
}