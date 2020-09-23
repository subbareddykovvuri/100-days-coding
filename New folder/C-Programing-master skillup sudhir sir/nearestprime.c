#include<stdio.h>
void nearest_prime(int n)
{
		int i,f=0,r,j,flag=0,num;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		  f=1;
		//  printf("not prime");
		  break;	
		}
	
	}
		if(f==0)
		{
			printf("prime");
		}
		else if(f==1)
		{
		//printf("%d",n);
		j=2;
	    num=n;
	    for(j=2;j<=num/2;j++)
	    {
	    	num=num-1;
	    	if(num%j==0)
	    {
	    	 flag=0;
		}
		}
		if(flag==1)
		{
			printf("prime number is %d",num);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	nearest_prime(n);
}
