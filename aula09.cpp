#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int tabuada,i;
	i=1;
	cout<<"Tabuado do: ";
	cin>> tabuada;
	while(i<=10)
	{
		cout<<tabuada << " x "<<i<<" = "<<tabuada*i<<endl;
		i++;
	}
	return 0;
}