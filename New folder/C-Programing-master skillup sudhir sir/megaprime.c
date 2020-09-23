#include<stdio.h>
void mega_prime(int n)
{
	int i,f=0,r,j,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		  f=1;
		  printf("not prime");
		  break;	
		}
	
	}
		if(f==0)
		{
			while(n)
			{
				r=n%10;
				n=n/10;
				for(j=2;j<=r/2;j++)
				{
					if(r%j==0)
					{
						flag=1;
						printf("not mega prime");
						break;
					}
				}
			
			}
				if(flag==0)
				{
					printf("mega prime number");
				}
		}
}
int main()
{
int n;
scanf("%d",&n);
mega_prime(n);
}
