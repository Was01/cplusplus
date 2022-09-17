# include <stdio.h>
# include <stdlib.h>

int main(){
	int opcao, valor;
	do{
		printf("Converter: \n");
		printf("\n1: Decimal para hexadecimal\n");
		printf("2: Hexadecimal para decimal\n");
		printf("\nInforme a sua opcao: ");
		scanf("%d",&opcao);
		getchar();
		system("cls");
	}while(opcao!=1 && opcao!=2);
	switch(opcao){
		case 1:
			printf("\nInforme o valor em decimal: ");
			scanf("%d",&valor);
			getchar();
			printf("\n%d em hexadecimal e %x.\n",valor,valor);
			break;
		case 2:
			printf("\nInforme o valor em hexadecimal: ");
			scanf("%x",&valor);
			getchar();
			printf("\n%x em decimal e %d.\n",valor,valor);
			break;
	}
	printf("\n");
	system("PAUSE");
	return 0;
}