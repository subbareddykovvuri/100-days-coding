#include<stdio.h>
int lon_con_ones(int n){
	int c=0;
	while(n>0){
		n=n&(n>>1);
		c++;
		
	}
	return c;
}
int main(){
	int n,l;
	scanf("%d",&n);
	l=lon_con_ones(n);
	printf("%d",l);
}

/*
longest con ones


93
1011101

3
*/
