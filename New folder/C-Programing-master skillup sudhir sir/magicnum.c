#include<stdio.h>
int mul(int n)
{
	n=(n*3)+1;
	printf("%d",n);
	if(n==1)
	{
	 	printf("Came upto one");	
	}
  else if(n%2==0)
	
	{
		return div(n);
	}
	else
	{
		return mul(n);
	}
	
	
}
int div(int n)
{

	n=(n/2);
	printf("%d\n",n);
		if(n==1)
	{
	 	printf("Came upto one");	
	}
	else if(n%2==0)
	{
		return div(n);
	}
	else
	{
		return mul(n);
	}
	
	
}
void magic_num(int n)
{
	if(n==1)
	{
		printf("Came upto one");
	}
	
	else{
		if(n%2==0)
		{
			div(n);
		//	return div(n);
		}
		else if(n%2!=0)
		{
		//	return mul(n);
		  mul(n);
		}
	}	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	magic_num(n);
}
