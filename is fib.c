#include<stdio.h>
#include<math.h>
int isfibi(n){
	int r,f1,f2,sq1,sq2;
	r=(n*n)*5;
	f1=r-4;
	f2=r+4;
	sq1=sqrt(f1);
	sq2=sqrt(f2);
	if(sq1*sq1==f1 || sq2*sq2==f2){
		return 1;
	}
	return 0;
}
int main(){
	int num,fi;
	scanf("%d",&num);
	fi=isfibi(num);
	if(fi){
		printf("%d is fib",num);
	}
	else{
		printf("%d is not fib",num);
	}
	return 0;
}
/*

64*5=320
320-4
320+4
true


9
81*5=405
401
409



*/
