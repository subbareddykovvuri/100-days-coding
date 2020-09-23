#include<stdio.h>
int neon_number(int r)
{
	int rem,sum=0;
	while(r)
	{
		rem=r%10;
		sum=sum+rem;
		r=r/10;
	}
	return sum;
}
int main()
{
	int n,r,res;
	scanf("%d",&n);
	r=n*n;
	res=neon_number(r);
	if(res==n)
	{
		printf("Neon number");
	}
	else
	{
		printf("Not a neon number");
	}
}
