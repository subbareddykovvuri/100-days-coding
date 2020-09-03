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

int main(){
	int n,i=2;
	scanf("%d",&n);
	while(i!=n){
		if(isprime(i)==1 && isprime(i+2)==1){
			printf("{ %d  , %d  } \n",i,i+2);	
		}
			
		i++;
	}
	
	return 0;	
}
