#include <stdio.h>
main(){
	int h=0,n=1,k;//�ʱⰪ 
	for(k=0;k<10;k++){//k��° �� n�� �װ� h�� �� 
		n=n+k;
		printf("%3d",n); 
		h=h+n;
	}
	printf("\n%d��° ���� ���� ���� %d\n",k,h);
}
