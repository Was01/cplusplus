# include<stdio.h>
# include <stdlib.h>
# include <ctype.h>

int main(){
	char regiao, vendedor,resp;
	while(1){
	
		do{
			printf("Regioes: Leste,Oeste,Norte,Sul\n");
			printf("\nInforme a primeira letra da regiao: " );
			scanf("%c",&regiao);
			getchar();
			regiao=toupper(regiao);
			system("cls");
		
	   	}while(regiao!= 'L'&& regiao!='O'&&regiao!= 'N'&& regiao!='S');
	
		switch(regiao){
			case 'L':
		   	   	printf("Vendedores: Ricardo, Jose e Mariana.\n");
		   	   	printf("\nInforme a primeira letra do vendedor: ");
		   	   	scanf("%c",&vendedor);
				getchar();
				vendedor=toupper(vendedor);
		   	   	system("cls");
		   	   	
			   	switch(vendedor){
		   		  	case 'R':
						printf("\nVendas do Ricardo: R$ %d.\n",20000);
				   	   	break;
					case 'J':
						printf("\nVendas do Jose: R$ %d.\n",15000);
						break;
					case 'M':
						printf("\nVendas da Mariana: R$ %d.\n",3000);
						break;
					default:
						printf("\nVendedor nao encontrado!!!\n");
					}
				break;
			
			case 'O':
				printf("Vendedores: Lucas, Carlos, Marcos.\n");
				printf("\nInforme a primeira letra do vendedor: ");
				scanf("%c",&vendedor);
				getchar();
				vendedor=toupper(vendedor);
				system("cls");
				
				switch(vendedor){
					case 'L':
				   	   	printf("\nVendas do Lucas: R$ %d.\n",50000);
				   	   	break;
					case 'C':
						printf("\nVendas do Carlos: R$ %d.\n",30000);
						break;
					case 'M':
						printf("\nVendas da Marcos: R$ %d.\n",40000);
						break;
					default:
						printf("\nVendedor nao encontrado!!!\n");
				}
				break;
						
			case 'N':
				printf("Vendedores: Ana, Beatriz, Luiz.\n");
				printf("\nInforme a primeira letra do vendedor: ");
				scanf("%c",&vendedor);
				getchar();
				vendedor=toupper(vendedor);
				system("cls");
				
				switch(vendedor){
					case 'A':
						printf("\nVendas da Ana: R$ %d.\n",30000);
						break;
					case 'B':
						printf("\nVendas da Beatriz: R$ %d.\n",20000);
						break;
					case 'L':
						printf("\nVendas do Luiz: R$ %d.\n",45000);
						break;
					default:
						printf("\nVendedor nao encontrado!!!\n");
				}
				break;
				
			case 'S':
				printf("Vendedores: Larissa,Manuela, Ivan.\n");
				printf("\nInforme a primeira letra do vendedor: ");
				scanf("%c",&vendedor);
				getchar();
				vendedor=toupper(vendedor);
		   	   	system("cls");
			   	switch(vendedor){
					case 'L':
						printf("\nVendas da Larissa: R$ %d.\n",18000);
						break;
					case 'M':
						printf("\nVendas da Manuela: R$ %d.\n",35000);
						break;
					case 'I':
						printf("\nVendas do Ivan: R$ %d.\n",45000);
				   	   	break;
					default:
				   	   	printf("\nVendedor nao encontrado!!!\n");
				}
				break;
		}
	
		printf("\nDeseja continuar?");
		scanf("%c",&resp);
		getchar();
		resp=toupper(resp);
		system("cls");
		if (resp!='S')
			break;
	}
	printf("\n");
	system("PAUSE");
	return 0;
}