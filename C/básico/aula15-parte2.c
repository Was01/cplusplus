# include <stdio.h>
# include <stdlib.h>


void codifica(){
	char ok=1;
	char ch;
	while(ok){
		scanf("%c",&ch);
		getchar();
		if(ch=='$'){
			ok=0;
			continue;
		}
		ch=ch+2;
		printf("%c\n",ch);
	}
}

int main(){
	printf("Entre com a letra a ser codificada ");
	printf("ou digite $ para sair: ");
	codifica();
	system("PAUSE");
	return 0;
}