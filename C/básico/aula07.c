# include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("Digite o valor da variavel a: ");
	scanf("%d",&a);
	printf("Digite o valor da variavel b: ");
	scanf("%d",&b);
	getchar();
	if(a<b){
		printf("%d eh menor que %d.\n",a,b);
	}
	else if(b<a){
			printf("%d eh menor que %d.\n",b,a);
		}
		else {
			printf("%d eh igual a %d.\n",a,b);
		}
   system("PAUSE");
   return 0;
}