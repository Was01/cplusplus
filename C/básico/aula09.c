# include <stdio.h>
# include <stdlib.h>

int main(){
	int i,j;
	for(j=1;j<=30;j++){
		for(i=1;i<=10;i++){
			printf("%2.d x %2.d = %2.d\t",i,j,i*j);
		}
		printf("\n");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}