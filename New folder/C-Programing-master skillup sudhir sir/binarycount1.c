#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	n=n>>k-1;
	n=n&32;
	if(n!=0)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
}
