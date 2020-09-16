#include<stdio.h>
int is_sparse(int n){
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
	if(is_sparse(n)){
		printf("Yes");
	}
	else
	printf("No");
	return 0;
}
/*
no consecutive 1's=sparse

12 
1100
no

10
1010
yes
*/
