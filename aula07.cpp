#include <iostream>

using namespace std;

int main(){
	int num=13;
	int resp=(num%2==0)?1:0;
	switch(resp)
	{
		case 1:
			cout<<"Numero par";
			break;
		case 0:
			cout<<"Numero impar";
			break;
	}
	return 0;
	
}