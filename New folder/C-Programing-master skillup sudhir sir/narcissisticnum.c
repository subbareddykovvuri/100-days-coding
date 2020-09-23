#include<stdio.h>
#include<math.h>
int digit_count(int n,int c)
{
	int r;
	while(n)
	{
		r=n%10;
		c=c+1;
		n=n/10;
	}
	return c;
}
int narcissistic_num(int n)
{
	int res,c=0,r,sum=0;
	res=digit_count(n,c);
//	printf("%d",res);
	while(n)
	{
		r=n%10;
		n=n/10;
		sum=sum+pow(r,res);
	}
	return sum;
	
}
int main()
{
	int n,n1,res;
	scanf("%d",&n);
	res=narcissistic_num(n);
//	printf("%d %d",n,res);
	if(n==res)
	{
		printf("Narcissistic number");
	}
	else
	{
		printf("Not a narcissistic number");
	}
}
