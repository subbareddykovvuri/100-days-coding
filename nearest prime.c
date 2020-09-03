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
	int num,res;
	scanf("%d",&num);
	res=isprime(num);
	if(res==1){
		printf("%d is a prime number",num);
	}
	else{
		int a,b,i;
		i=1;
		while(isprime(num-i)!=1){
			i++;	
		}
		a=num-i;
		i=1;
		while(isprime(num+i)!=1){
			i++;		
		}
		b=num+i;	
		if(num-a>b-num){
			printf("%d is the nearest prime number",b);
		}
		else if(num-a<b-num){
			printf("%d is the nearest prime number",a);	
		}
		else{
			printf("%d , %d are the nearest prime numbers",a,b);	
		}	
	}
}

