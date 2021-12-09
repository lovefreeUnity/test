#include <stdio.h>
int sum_func(int a,int b);
main()
{
	int a=3,b=4,sum;
	printf("%d",sum_func(a,b));
}
int sum_func(int a,int b){
	return a+b;
}
