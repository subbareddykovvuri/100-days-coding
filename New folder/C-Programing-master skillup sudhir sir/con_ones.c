#include<stdio.h>
int lcos(int n)
{
	int c=0;
	while(n)
	{
		n=n&(n>>1);
		c++;
	}
	return c;
}
int main()
{
	int c,n;
	scanf("%d",&n);
	c=lcos(n);
	printf("%d",c);
}
/*
lonest con ones


10101010
01010101
--------
00000000
c++

*/
