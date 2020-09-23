#include<stdio.h>
void happy_num(int n)
{
	int r,r1,sum=0,c=0;
	while(n)
	{
		if(c==1 || n==1 || n==7)
		{
			if((sum==1 || sum==7) ||(n==1 || n==7))
		{
			printf("Happy number");
		}
		else
		{
			printf("not a happy number");
		}
			return;
		}
		printf("%d \n",sum);
	
		c=0;
		sum=0;
	while(n)
	{
		
		r=n%10;
		c++;
		r1=r*r;
		sum=sum+r1;
		n=n/10;
	}

//	printf("%d",c);
	n=sum;

	
	}

}
int main()
{
	int n;
	scanf("%d",&n);
	happy_num(n);
}
