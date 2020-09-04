#include<stdio.h>
int fun3(int n){
	static int i=1;
	if(i>=n){
		printf("%d ",n--);
		i--;
	}
	else{
	
		printf("%d ",i++);
	}
	if(i==0){
		return ;
	}
	fun3(n);
}
int main(){
	int n;
	scanf("%d",&n);
	fun3(n);
	
}
