# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <ctype.h>
# include<time.h>


int main(){
	int i,j,resposta;
	int erros=0,acertos=0;
	char opcao;
	

	inicio:
		srand(time(NULL));
		i=rand()%11;
		j=rand()%11;
		printf("Qual a resposta %d x %d ? ",i,j);
		scanf("%d",&resposta);
		getchar();
		if(resposta==i*j){
			acertos++;
			printf("\nResposta correta!!!\n");
		}
		else{
			erros++;
			printf("\nResposta errada!!!\n");
		}
         
       
    meio:
    	
    	printf("\nDeseja continar respondendo:? s - sim, n - nao: ");
    	scanf("%c",&opcao);
    	getchar();
    	opcao=toupper(opcao);
    	system("cls");
    	printf("\n");
    	switch(opcao){
    		case 'S':
				goto inicio;
				break;
		
			case 'N':
				goto fim;
				break;
			default:
				printf("\nOpcao invalida!!!\n");
				goto meio;
		}
			
			
    fim:
 	     printf("\nAcertos=%d\n",acertos);
         printf("\nErros= %d\n",erros);
         printf("\n");
   	    system("PAUSE");
		return 0;      
}
