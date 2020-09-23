#include<stdio.h>
void su_prime(int n)
{
	int i,f=0,count=0,num=2,j,fi=0,g=0,k;
	for(i=2;i<n;i++)
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
	//	printf("prime \n");
		for(i=3;i<=n;i++)
		{
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					fi++;
				//	printf("%d is not prime \n",i);
					break;
				}
				
			}
			
		}
		//printf("%d",fi);
		num=(n-1)-fi;
	//	printf(" position is %d",num);
		for(k=2;k<=num/2;k++)
		{
			if(num%k==0)
			{
				printf("not super prime");
				g=1;
				break;
			}
		}
		if(g==0)
		{
			printf("It is super prime");
		}
		
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	su_prime(n);
}
