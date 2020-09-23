#include<stdio.h>
int total_bit(int n){
	int c;
	while(n){
		c++;
		n=n>>1;
	}
	return c;
}
int main(){
	int n,t;
	scanf("%d",&n);
	t=total_bit(n);
	printf("%d",t);
	return 0;
}
/*
n=5
3
n=10
4
*/
