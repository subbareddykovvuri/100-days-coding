#include<stdio.h>
#include<math.h>
int main(){
	int num,f,n,d;
	scanf("%d",&num);
	f=sqrt(5);
	n=pow((1+f),num)-pow((1-f),num);
	d=pow(2,num)*f;
	printf("%d",n/d);
	return 0;
}
