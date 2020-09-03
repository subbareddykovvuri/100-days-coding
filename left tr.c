#include<stdio.h>
int isprime(int num){
	int i,fc=0;
	for(i=2;i<num/2;i++){
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
	int num,res,n,rem,rev=0;
	scanf("%d",&num);
	res=isprime(num);
	if(res==1){
		n=num;	
		while (n!= 0) {
        	rem = n % 10;
        	rev = rev * 10 + rem;
        	n/= 10;
    	}
    	while(rev>0)    
		{	    
			rev=rev/10;	
			if(rev==0){
				printf("%d is a left tr",num);
				break;
			} 
			if(isprime(rev)!=1){
				printf("%d is not a left tr",num);
				break;
			}	
			 
		}
		
	}
	else{
		printf("%d is not a left tr",num);
	}
}
/*
right tr prime
239
23
2


left tr prime

317
17
7

while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

*/
