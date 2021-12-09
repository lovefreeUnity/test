#include <stdio.h>
int fac_func(int n){
	if(n==1)
		return 1;
	else
		return fac_func(n-1)*n;
}
main()
{
	int n;
	scanf("%d",&n);
	printf("%d \n",fac_func(n));//함수 호출 
}
