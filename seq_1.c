#include<stdio.h>
void seq_1(int n){	
	while(n!=1){
		printf("%d  ",n);
		if(n%2==0){
			n=n/2;	
		}
		else{
			n=n*3+1;	
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	seq_1(n);	
	return 0;
}
/*
n=30
30 even 30/2=15 odd 15*3+1=46 even 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1  
*/
