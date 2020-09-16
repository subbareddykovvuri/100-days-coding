#include<stdio.h>
int is_sparse1(int n){
	while(n>0){
		if((n&1==1)&& (n>>1&1)==1){
			return 0;
		}
		n=n>>1;
	}	
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	if(is_sparse1(n)){
		printf("Yes");
	}
	else
	printf("No");
	return 0;
}
