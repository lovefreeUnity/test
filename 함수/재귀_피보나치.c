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
	printf("\n ���ϰ��� �ϴ� �� �Է� :");
	scanf("%d",&n);
	res=fibo(n);
	printf("\n %d��° ���� %d�Դϴ�. \n",n,res);
	for(i=n;i>0;i--){
		sum+=fibo(i);
	}
	printf("\n%d",sum);
}
