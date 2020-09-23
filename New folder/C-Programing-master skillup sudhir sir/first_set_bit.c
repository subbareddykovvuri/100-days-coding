#include<stdio.h>
int first_set_bit(int n)
{
	int pos=1;
	
	while(n>0)
	{
		if((n&1)==0)
			return pos;
		n=n>>1;
		pos++;
	}
}
int main()
{
	int n,pos;
	scanf("%d",&n);
	pos=first_set_bit(n);
	printf("%d",pos);
	
}
/*
1000
0001
----



*/
