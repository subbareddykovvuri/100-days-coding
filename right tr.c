#include<stdio.h>
int isprime(int num){
	int i,fc=0;
	if(num==1){
		return 0;
	}
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			fc=1;	
			return 0;
			break;
		}
	}
	
	if(fc==0){
		
		return 1;
	}
}
int main(){
	int num,res,n;
	scanf("%d",&num);
	res=isprime(num);
	if(res==1){
		n=num;
		while(n>0)    
		{	    
			n=n/10;
		
			if(n==0){
				printf("%d is a right tr",num);
				break;
			} 
			if(isprime(n)!=1){
				printf("%d is not a right tr",num);
				break;
			}
			
			 
		}
	}
	else{
		printf("%d is not a right tr",num);
	}
}
