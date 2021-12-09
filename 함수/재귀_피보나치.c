#include <stdio.h>
int fibo(int n){
	if(n==0){
		return 0;
	}
	else if(n==1||n==2)
		return 1;
	else{
		return (fibo(n-1)+fibo(n-2));
	}
}
main(){
	int n,i,res,sum=0;
	printf("\n 구하고자 하는 항 입력 :");
	scanf("%d",&n);
	res=fibo(n);
	printf("\n %d번째 항은 %d입니다. \n",n,res);
	for(i=n;i>0;i--){
		sum+=fibo(i);
	}
	printf("\n%d",sum);
}
