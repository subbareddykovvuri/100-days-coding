#include <stdio.h>
int isprime(int num) {
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
int twin_prime(int a,int b){
	if(a<b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	
	if(a-b==2 && isprime(a)==1 && isprime(b)==1){
		return 1;	
	}
	return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(twin_prime(a,b)==1){
		printf("%d ,%d are twin primes",a,b);
	}
	else{
		printf("%d ,%d are not twin primes",a,b);	
	}
	return 0;	
}
