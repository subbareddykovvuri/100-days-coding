#include<stdio.h>
int first_set_bits(int n){
	int pos=1;
	while(n>0){
		if((n&1)==1)
			return pos;
		n=n>>1;
		pos++;
	}
}
int main(){
	int n,pos;
	scanf("%d",&n);
	pos=first_set_bits(n);
	printf("%d",pos);
	return 0;
}
/*
n=10
1010

o/p:2

n=11
1011
o/p:1

n=12
1100
o/p:3
*/
