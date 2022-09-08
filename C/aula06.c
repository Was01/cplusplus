# include <stdio.h>
# include <stdlib.h>

int main(){
	int a,b,c,d;
	a=b=c=d=0;
	a++;
	b--;
	c=1;
	c+=a;
	d-=c;
	printf("a = %d\tb = %d\tc = %d\td = %d\n",a,b,c,d);
	system("PAUSE");
	return 0;
}