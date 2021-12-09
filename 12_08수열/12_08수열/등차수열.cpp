#include <stdio.h>
main(){
	int h=0,n=1,k;//초기값 
	for(k=0;k<10;k++){//k번째 항 n은 그값 h는 합 
		n=n+k;
		printf("%3d",n); 
		h=h+n;
	}
	printf("\n%d번째 항은 까지 합은 %d\n",k,h);
}
