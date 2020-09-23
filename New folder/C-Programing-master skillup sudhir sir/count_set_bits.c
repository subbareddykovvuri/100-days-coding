#include<stdio.h>
int count_set_bits(int n)
{
	int c=0;
	while(n)//8
	{
		n=n&(n-1);
		c++;
	}
	return c;
}
int main()
{
	int c=0,n;
	scanf("%d",&n);
	c=count_set_bits(n);
	printf("%d",c);	
}

/*
n=10
1010
1001
-----
1000
0111
----
0000
*/
