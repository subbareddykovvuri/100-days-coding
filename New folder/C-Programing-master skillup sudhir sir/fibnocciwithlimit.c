#include<stdio.h>
int fibnoci(int a,int b, int n)
{
//	const n1=n;
	//printf("n1 is %d",n1);
	
	if(n<=a+b)
	{
	//	printf(" final is %d ",b);
		return  ;
	}
	if(a==0)
	{
		printf("%d  %d  %d ",a,b,a+b);
		return fibnoci(b,a+b,n);
	}
	else
	{
	int	c=a+b;
	
	
		//printf("n1 is %d",n1);
		printf("%d  ",a+b);
		return fibnoci(b,a+b,n);
	
	//	printf(" c is %d",c);
	//	printf(" %d ",a+b);
		
	}
	
}

int main()
{
	int a=0,b=1,n,n1,res;

	scanf("%d",&n);
		n1=n;
   res=	fibnoci(a,b,n);
   //printf("res is %d",res);
}
