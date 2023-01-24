#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int i;
	int v[101];
	for(i=0;i<=100;i++){
		v[i]=i;

	}
	for(i=0;i<=100;i++)
		cout<<v[i]<<endl;
	return 0;
}