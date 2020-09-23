#include<stdio.h>
int is_prime(int n)
{
	int j;
	for(j=2;j<=n/2;j++)
			{
				if(n%j==0)
				{
					//fi++;
					//printf("%d is not prime \n",n);
					return 0;
				}
				
			}
			return 1;
}
void semi_prime(int n)
{
	int v,i;
	if (is_prime(n))
	{
		printf("prime");
	}
	else
	{
		//printf("Not prime");
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				v=n/i;
				//printf("quotient is %d and i is %d",v,i);
				if(is_prime(i) && is_prime(v))
				{
					printf("%d is semi prime",n);
					break;
				}
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	semi_prime(n);
}
