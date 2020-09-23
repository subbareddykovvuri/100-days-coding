#include<stdio.h>
void l_trunk(int n)
{
	int i,f=0,r,j,fi=0;
	for(i=2;i<n/2;i++)
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
		//printf("Prime");
		while(n%j==0)
		{
			r=n%10;
			n=n/10;
			printf("%d",n);
			for(j=2;j<r/2;j++)
			{
				if(n%j==0)
				{
				   	fi=1;
				//	printf("not right truncation");
					break;
				}
				else
				{
					
				
				}
			}
		
		}
			if(fi==1)
			{
				printf("Not right truncation");
			
			}
			if(fi==0)
			{
				printf("prime after right truncation");
			}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	l_trunk(n);
}
