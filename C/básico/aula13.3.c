# include<stdio.h>
# include <stdlib.h>

void display(){
	printf("Digite 0 para sair\n");
	printf("ou informe um inteiro para calcular o seu quadrado: ");

}

int leitura(){
	int t;
	scanf("%d",&t);
	return t;
}

void square(int numero){
	printf("Quadrado: %d\n\n",numero*numero);
}

int main(){
	int valor;
	for(display();valor=leitura();display()){
		square(valor);
	}
	printf("\n\n");
    system("PAUSE");
	return 0;
	
}