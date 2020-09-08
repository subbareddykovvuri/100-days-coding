#include<stdio.h>
void seq_4rec(int a,int b,int c,int n){
	if(n==0){
		return;
	}
	if(a==1&&b==1&&c==1){
		printf("%d %d %d ",a,b,c);
		return seq_4rec(b,c,a+b,n-3);
	}
	printf("%d ",a+b);
	return seq_4rec(b,c,a+b,n-1);
	
	
}
int main(){
	int n,a=1,b=1,c=1;
	scanf("%d",&n);
	seq_4rec(a,b,c,n);
	
	return 0;
}
