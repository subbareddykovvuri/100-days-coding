#include<stdio.h>
void fun_2(int n){
	int r,k=1;
	while(n>0)    
	{    
		r=n%10;    
		k=k*r;    
		n=n/10;    
	} 
	printf("%d",k);
		
}
	
int main(){
	int n;
	scanf("%d ",&n);
	fun_2(n);
	
}
/*
115

1*1*5=5

115%5==0
*/
