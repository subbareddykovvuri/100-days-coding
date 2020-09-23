#include<stdio.h>
void spy_number(int n,int *sum,int *pro)
{
	int r;
	if(n==0)
	{
		return ;
	}
	r=n%10;
	*sum=*sum+r;
	*pro=*pro*r;
//	printf("%d %d %d",r,*sum,*pro);
	return(spy_number(n=n/10,sum,pro));
}
int main()
{
	int n,sum=0,pro=1;
	scanf("%d",&n);
	spy_number(n,&sum,&pro);
	printf("sum is %d and pro is %d",sum,pro);
	if(sum==pro)
	{
		printf(" \n Spy number");
	}
	else
	{
		printf(" \n not a spy number");
	}
}
