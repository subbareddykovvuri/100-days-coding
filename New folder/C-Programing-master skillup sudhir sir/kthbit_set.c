#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	n=n>>k-1;
	n=n&1;
	if(n!=0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}

/*
k=4
1010101
0000001--->2
-------

5&1
101
001


*/
