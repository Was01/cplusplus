#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	bool primo;
 
 	for (int n=2;n<=100;n++){
		primo=true;
		for(int i=2;i<n;i++){
			if (n%i==0)
				primo=false;
		}
   	   if(primo)
 	 	 	 cout<<n<<endl;
	 	
    } 
	return 0;
}