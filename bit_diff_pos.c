#include<stdio.h>
int bitdiff_pos(int n,int m){
	int pos=1;
	if(n==m){
		return 0;
	}
	n=n^m;
	
	while(n>0){
		if((n&1)==1)
			return pos;
		n=n>>1;
		pos++;
	}
}
int main(){
	int n,m,pos;
	scanf("%d%d",&n,&m);
	pos=bitdiff_pos(n,m);
	printf("%d ",pos);
}
/*
n=15
m=11

1111
1011
----XOR
0100 

*/
