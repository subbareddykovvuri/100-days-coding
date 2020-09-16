#include<stdio.h>
int lon_con_ones(int n){
	int max=0;
	while(n>0){
		if(n&1==1){
			max=max+1;
		}
		
	}
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
