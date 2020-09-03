#include<stdio.h>
int isprim(int num){
	int i,fc;
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

int find_posr(int num){
	if(num==2){
		return 1;
	}
	if(isprim(num)==1){
		return 1+find_posr(num-1);
	}
	return 0+find_posr(num-1);
} 


int main(){
	int n=1,num;
	scanf("%d",&num);

	if(isprim(num)==1 && isprim(find_posr(num))==1){
		printf("%d is a super prime",num);
	}
	else{
		printf("%d is not a super prime",num);
	}	
}
