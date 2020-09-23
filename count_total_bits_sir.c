#include<stdio.h>
#include<math.h>
int total_bits(int n){
	return (int)log2(n)+1;
}
int main(){
	int n,t;
	scanf("%d",&n);
	t=total_bits(n);
	printf("%d",t);
	return 0;
}
