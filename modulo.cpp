/* Esse � um m�dulo que cont�m fun��es matem�ticas*/

int fatorial(int n){
	int fat=1;
	for (int i=1;i<=n;i++)
	{
		fat*=i;
	}
	return fat;
}

int combinacao(int n,int p)
{
	return fatorial(n)/(fatorial(p)*fatorial(n-p));
}