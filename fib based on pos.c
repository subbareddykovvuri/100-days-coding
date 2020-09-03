#include<stdio.h>
#include<math.h>
int find_fib(int num){
	int f,n,d;
	f=sqrt(5);
	n=pow((1+f),num)-pow((1-f),num);
	d=pow(2,num)*f;
	return n/d;
}
int main(){
	int num,f1;
	scanf("%d",&num);
	f1=find_fib(num);
	printf("%d",f1);
	return 0;
}
