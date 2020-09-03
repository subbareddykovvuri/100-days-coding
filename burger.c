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
	int num;
	scanf("%d",&num);

	if(isprime(num-1)==1 && isprime(num+1)==1){
		printf("%d is a burger prime",num);
	}
	else{
		printf("%d is not burger prime",num);
	}
}
