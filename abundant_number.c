#include<stdio.h>
void abundant_number(int n){
	int s=0,i;
	for(i=1;i<n;i++){
		
		if(n%i==0){
			//printf("%d ",i);
			s+=i;
		}
		
	}
	if(s>n){
		printf("abundant number");
	}
	else{
		printf("NOT abundant number");
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	
	abundant_number(n);
	return 0;
}
