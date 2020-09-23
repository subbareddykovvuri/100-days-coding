#include<stdio.h>
void sandwitch(int n)
{
	int i,j,f=0,fn=0,fng=0,num,nu;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			f=1;
			//printf("not prime");
			break;
			
		}
	}
	if(f==1)
	{
	//	printf("not prime");
	num=n-1;
	nu=n+1;
	for(j=2;j<num/2;j++)
	{
		if(num%j==0)
		{
			fn=1;
			printf("not prime");
			break;
			
		}
		if(nu%j==0)
		{
			fng=1;
			printf("not prime");
			break;
		}
	}
	if(fn==0 && fng==0)
	{
		printf("Sandwitch prime");
	}
	
	}
	else if(f==0)
	{
		printf("prime");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	sandwitch(n);
}
