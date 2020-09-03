#include <stdio.h>
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

int semi_prime(int num){
	int i;
	i=2;
	while(i!=num/2){
	
		if(is_prime(i)==1){
			if(num%i==0)
			{
				if(is_prime(i)==1 && is_prime(num/i)==1){
					return 1;
					break;
				}
			}
		}
		i++;
	}
	return 0;
}
int main() {
	int num,i;
	scanf("%d",&num);
	if(is_prime(num)==0){
		if(semi_prime(num)==1)
		{
			printf("%d is a semi prime",num);
		}
		else{
			printf("%d is not a semi prime",num);
		}
	}
	else{
		printf("%d is not a prime",num);
	}
}
