#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
			
		}
	}
	return 1;
}
int main()
{
	int n,res;
	scanf("%d",&n);
//	res=isprime(n);
	if(isprime(n))
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
	
}
