#include<stdio.h>
int fun1(int n){
	int i,j=n;
	for(i=1;i<n*2;i++){
		if(i<=n){
			printf("%d  ",i);
		}
		else{
			j--;
			printf("%d  ",j);
		}
			
	}
	return;
}
int main(){
	int n;
	scanf("%d",&n);
	fun1(n);
	return 0;
}
