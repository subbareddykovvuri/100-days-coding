#include<stdio.h>
int is_sparse1(int n){
	return ((n&n/2)==0);
	//retrun((
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
