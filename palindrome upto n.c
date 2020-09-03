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

int ispalindrome(int n){
	int rem,rev=0,num;
	num=n;
	while (n!= 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n/= 10;
    }
    
    
    if(num==rev){
    	return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int num,i;
	scanf("%d",&num);
	for(i=11;i<num;i++){
		if(isprime(i)==1 && ispalindrome(i)==1){
		printf("%d    ",i);
		}	
	}
	
	
    return 0;	
}
