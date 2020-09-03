#include <stdio.h>
int fib(int n){
	int a=0,b=1,c,i;
	printf("%d   %d",a,b);
	for(i=2;i<n;i++){
		
		c=a+b;
		printf("   %d  ",c);
		a=b;
		b=c;
		
	}
	
}
int main(){
	int num;
	scanf("%d",&num);
	fib(num);
	
}

/*
0 1 1 2  3 5 8 13 21 34 55....



*/
