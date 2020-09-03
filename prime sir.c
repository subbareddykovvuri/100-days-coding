#include <stdio.h>
int main() {
	int num,i,fc=0;
	scanf("%d",&num);
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			fc=1;
			printf("%d is not a prime number",num);
			break;
		}
	}
	if(fc==0){
		printf("%d is a prime number",num);
	}
}
//nearest prime
// 10 11
//15 13 17
