#include<stdio.h>
int fibnoci(int a,int b, int n)
{
	if(n<=0)
	{
	//	printf(" final is %d ",b);
		return ;
	}
	if(a==0)
	{
		printf("%d %d %d",a,b,a+b);
		return fibnoci(b,a+b,n-3);
	}
	else
	{
		printf("%d",a+b);
		return fibnoci(b,a+b,n-1);
	}
	
}

int main()
{
	int a=0,b=1,n,res;
	scanf("%d",&n);
   res=	fibnoci(a,b,n);
   printf("res is %d",res);
}
