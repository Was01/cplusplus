# include <stdio.h>
# include <stdlib.h>

int main(){
	int i;
	for(i=0;i<=100;i++){
		if(i%2)
			continue;
		printf("%d\n",i);
	}
	system("PAUSE");
	return 0;
		
}