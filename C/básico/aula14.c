# include <stdio.h>
# include <stdlib.h>

int main(){
	int opcao=1;
	
	do{
		printf("Digite a opcao: 1 - Sim, 2 - Nao: ");
		scanf("%d",&opcao);
		getchar();
	}while(opcao<1 || opcao>2);
	
}