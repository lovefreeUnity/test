#include <stdio.h>
main(){
	int a=1,b=1,c=0,n=2,s=2;
	
	for(n=2;n<10;n++){ 
		c=a+b;
		s=s+c;
		a=b;
		b=c;
	}
	printf("%d",s);
	
} 
