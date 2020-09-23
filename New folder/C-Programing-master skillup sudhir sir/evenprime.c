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
int even_prime(int n)
{
	int i,c=0;
	for(i=2;i<=n;i++)
	{
		if(c==n)
		{
			if(is_prime(i)||i%2==0)//2 2 3 4 5 6 7  8 10 11 12 13 14 16 17
			{
				return i;
			}
			else
			{
				return i-1;
			}
		}
			if(i%2==0)
		{
		//	printf("%d ",i);
			c=c+1;
		}
		if(is_prime(i))
		{
			//printf("%d ",i);
			c=c+1;
		}
	
		
	}
}
int main()
{
	int n,r;
	scanf("%d",&n);
    r=even_prime(n);
    printf("%d",r);
}
