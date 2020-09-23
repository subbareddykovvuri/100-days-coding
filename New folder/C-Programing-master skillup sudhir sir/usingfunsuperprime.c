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
void su_prime(int n)
{
	int i,fi=0,num,g=0;
	
	if(is_prime(n))
	{
		//printf("prime \n");
		for(i=3;i<=n;i++)
		{
			if(is_prime(i)==0)
			{
			//	printf(" %d is not prime \n",i);
				fi++;
			}
			
		}
		//printf("%d",fi);
		num=(n-1)-fi;
	//	printf(" position is %d",num);
		if(is_prime(num)==0)
		{
			g=1;
			printf("It is not super prime \n");
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
