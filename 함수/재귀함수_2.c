#include <stdio.h>
char star[20];
int f(int n){
	if (n>0)
 	{
		f(n-1);
		star[n-1]='*';
		printf("%s\n",star);
	}
}
main()
{
	int n;
	scanf("%d",&n);
	f(n);
	
}
