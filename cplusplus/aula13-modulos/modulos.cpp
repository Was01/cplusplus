/* Esse m�dulo cont�m fun��es matem�ticas*/

int fatorial (int n){
	int fat =1;
	for(int i=1;i<=n;i++)
		fat=fat*i;
	return fat;
	
}

int area_quadrado(int lado){
	return lado*lado;
}