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
void fac_prime(int n)
{
	int v,n1=n,i,sum=0;;
	if(is_prime(n) )
	{
		printf("Prime number");
	}
	else
	{
	
		while(n1!=1)
		{
			
			printf("%d",n1);
			for(i=1;i<n;i++)
			{
				if(n1%i==0)
				{
					
					sum=sum+i;
				//	printf("%d \n",i);
					//n1=sum;
				
				}
			}
			printf("%d \n",sum);
			n1=sum;
			if(n1==n || n1==1)
			{
				printf("over");
				break;
			}
			else{
				n=n1;
			}
			
			
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fac_prime(n);
}
