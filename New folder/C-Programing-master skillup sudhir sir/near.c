#include<stdio.h>
void prime(int n)
{
	int i,f=0,num,fg=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f++;
		//	printf("not prime");
		}
	}
	//printf("%d",f);
	if(f==0)
	{
		printf("prime");
	}
	if(f!=0)
	{

	while(num>0)
	{
		for(i=2;i<=n/2;i++)
	{
		if(num%i==0)
		{
			fg++;
		//	printf("not prime");
		}
	}
        if(fg!=0)
		{
			num=n-1;
		}
         	if(fg==0)
	{
		printf("prime number is %d",num);
		break;
	}			
		
	}


}
}
int main()
{
	int n;
	scanf("%d",&n);
	prime(n);
}
