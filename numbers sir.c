#include<stdio.h>
void fun2(int n){
	int i=1;
	while(n){
		if(i<n){
			printf("%d",i++);
		}
		else{
			printf("%d",n--);
		}	
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	fun2(n);
	return 0;
}
