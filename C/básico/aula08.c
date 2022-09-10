#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao;
	int valor;
	printf("***********************************Conversor de bases numericas******************************************************** \n");
	printf("\n1 - Decimal para hexadecimal \n");
	printf("2 - Hexadecimal para decimal\n");
	do{
	   	printf("\nInforme a sua opcao: ");
		scanf("%d",&opcao);
		getchar();
	}while(opcao!=1 && opcao!=2 );
	if(opcao==1){
		printf("\nInforme o valor em decimal: ");
		scanf("%d",&valor);
		getchar();
		printf("\n%d em hexadecimal eh: %x\n\n",valor,valor);
	}else if(opcao==2){
		printf("\nInforme o valor em hexadecimal: ");
		scanf("%x",&valor);
		getchar();
		printf("\n%x em decimal eh: %d\n\n",valor,valor);
		
	}
	system("PAUSE");
	return 0;
}