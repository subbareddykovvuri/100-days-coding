#include<stdio.h>
int sumof_digits(int n)
{
	int r,sum,k=0;
		while(n)
	{
		r=n%10;
		sum=r*r;
		k=k+sum;
		n=n/10;
	
     //	printf("%d \n",r);
	//	printf("%d",sum);
	
	}
	return k;
	
}
int happy_number(int n)
{
	int res;
	res=sumof_digits(n);
	printf("res is %d \n",res);
	while(res!=0)
	{
		if(res==1)
	{
		printf("It is a happy number");
	}
	else
	{
		n=res;
		printf("n is %d",n);
		sumof_digits(n);
	}
		
	}
	

}
int main()
{
	int n;
	scanf("%d",&n);
	happy_number(n);
}
