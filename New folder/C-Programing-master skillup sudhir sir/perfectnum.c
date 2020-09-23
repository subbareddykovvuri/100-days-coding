#include<stdio.h>
void perfect_num(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	if(sum==n)
	{
		printf("perfect number");
	}
	else{
		printf("not a perfect number");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	perfect_num(n);
}
