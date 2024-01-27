#include<iostream>

using namespace std;

int main(){
	int matriz[2][4];
	int i,j;
	matriz[0][0]=0;
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[0][3]=0;
	
	matriz[1][0]=1;
	matriz[1][1]=1;
	matriz[1][2]=1;
	matriz[1][3]=1;
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
	
}