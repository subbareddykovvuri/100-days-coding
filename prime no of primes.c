#include<stdio.h>
int is_prime(int num){
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
	int a,b,i,p=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		if(is_prime(i)==1){
			p++;
		}
		
	}
	printf("no of primes between %d and %d including them = %d",a,b,p);
	
	
}
