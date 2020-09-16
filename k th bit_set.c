#include<stdio.h>
int binary(int n,int k){
	int i;
	for(i=1;i<=k;i++){
		if(i==k){
			return n%2;
		}
		n=n/2;
	}
}    
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	
	if(binary(n,k)==1){
		printf("yes");
	}
	else{
		printf("no");
	}
}
/*
n=30 key=3

0001 1110

*/
