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

int find_pos(int num){
	int pos=0;
	while(num!=1){
		if(is_prime(num)==1){
			pos++;
		}
		
		num--;
		
	}
		
	return pos;
} 


int main(){
	int num,x;
	scanf("%d",&num);
	x=find_pos(num);

	if(is_prime(x)==1 && is_prime(num)==1){
		printf("%d is a super prime",num);
	}
	else{
		printf("%d is not a super prime",num);
	}	
}
