#include<stdio.h>
void near_num(int n)
{
	int f=0,i,num,j,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=1;
		//	printf("not prime");
			break;
		}
	}
	if(f==0)
	{
		printf("prime");
		
	}
	else if(f==1)
	{
		printf("not prime");
		num=n-1;
		while(num>0)
		{
			//num=num-1;
		//	printf("%d",num);
			for(j=2;j<=num/2;j++)
			{
				if(num%j==0)
				{
					num=num-1;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("prime number is : %d",num);
				break;
			}
			
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	near_num(n);
}
