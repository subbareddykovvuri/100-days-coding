#include<stdio.h>
void seq_2(int n){
	printf("%d  ",n);	
	if(n!=1){
		if(n%2==0){
			
			return seq_2(n/2);
		}
		else{
			
			return seq_2(n*3+1);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	seq_2(n);	
	return 0;
}
