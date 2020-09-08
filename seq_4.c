#include<stdio.h>
void seq_4(int n){
	int a=1,b=1,c=1,i=0,j=3;
	printf("%d %d  %d  ",a,b,c);
	while(j<n){	
		i=a+b;
		a=b;
		b=c;
		c=i;
		printf("%d  ",i);
		j++;
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	seq_4(n);
	return 0;
}
/*
1 1 1 2 2 3 4 5 7 9 
*/
