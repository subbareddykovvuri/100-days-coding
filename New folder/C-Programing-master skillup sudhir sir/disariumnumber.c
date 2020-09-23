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
void disarium_number(int n)
{
	int r,res,i,count=0,n1=n;
	int sum,c=0;
    res=digit_count(n,c);
   // printf("%d",res);
    i=res;
    while(n)
    {
    	r=n%10;
    	count=count+(pow(r,i));
    	i=i-1;
    	n=n/10;
    	
	}
	printf("%d",count);
	if(n1==count)
	{
		printf("Disarium number");
	}
	else
	{
		printf("not a disarium number");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	disarium_number(n);
}
