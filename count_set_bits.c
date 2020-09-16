#include<stdio.h>
int count_set_bits(int n){
	int c=0;
	while(n){
		n=n&(n-1);
		c++;
	}
	return c;
}
int main(){
	int n,c;
	scanf("%d",&n);
	c=count_set_bits(n);
	printf("%d",c);
	return 0;
}
/*n=5
101
no of 1's =2
*/
