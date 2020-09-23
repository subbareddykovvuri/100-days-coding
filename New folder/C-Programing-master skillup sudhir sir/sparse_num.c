#include<stdio.h>
int issparse(int n)
{
	return ((n&(n/2))==0);
}
int main()
{
	int n;
	scanf("%d",&n);
	if(issparse(n))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
/*
8
1000
0100
------
0000



10
1010
0101
-----
0000

13
1101
0110
-----
0100
----
1100
0110


0111
0011
----
0011















*/
