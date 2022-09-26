# include<stdio.h>
# include<stdlib.h>

//Aplicação: jogo "acerte valor"

int main (){
	int i;
	for(i=0;i!=12;){
		printf("Digite o valor da senha numerica:");
		scanf("%d",&i);
		getchar();
		if (i!=12){
			printf("\nSenha incorreta!!!. Pressione <enter> para tentar novamente");
			getchar();
		}
		
		system("cls");
	}
	printf("Ok, voce acertou!!!\n\n");
	
	system("PAUSE");
	return 0;
	
}