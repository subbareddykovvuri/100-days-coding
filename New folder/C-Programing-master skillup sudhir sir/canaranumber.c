#include<stdio.h>
#include<math.h>
void canada_number(int n)
{
	int i,r,sum=0,sqr=0;
	
	for(i=2;i<=sqrt(n);i++)
	{
	
		 if(n%i==0)
		 {
		 	sum=sum+i+(n/i);
		 }
		}
		while(n)
		{
			r=n%10;
			sqr=sqr+pow(r,2);
			n=n/10;
		}
			
	
	if(sqr==sum)
	{
		printf("Canada number");
	}
	else
	{
		printf("not a canada number");
	}
	printf("%d",sum);
	printf("%d",sqr);
}
int main()
{
	int n;
	scanf("%d",&n);
	canada_number(n);
}
