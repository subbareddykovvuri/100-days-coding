#include<stdio.h>
#include<math.h>
void lcm_method(int a,int b)
{
	int temp=2,tem=2,c,d,lcm,i;
		if(a>b && a%b==0)
		{
			printf("lcm is %d",a);
		}
		else if(a<b && b%a==0)
		{
			printf("lcm is %d",b);
		}
		else if(a==b)
		{
			printf("Enter 2 unique numbers to give the lcm");
		}
		else if(a>b && a%b!=0)
		{
			while(a%b!=0)
			{
				c=(a*temp);
				if(c%b==0)
				{
					printf("lcm is %d",c);
					temp=2;
					break;
				}
				else 
				{
					temp=temp+1;
				}
			}
		}
		else if(a<b && b%a!=0)
		{
			while(b%a!=0)
			{
				d=(b*tem);
				if(d%a==0)
				{
					printf("lcm is %d",d);
					tem=2;
					break;
				}
				else{
					tem=tem+1;
				}
			}
		}
		else 
		{
		for(i=2;i<=sqrt(a)||sqrt(b);i++)
	{
		if(a%i==0 || b%i==0)
		{
			lcm=a*b;
			printf("lcm is %d",lcm);
			break;
			
		}
	}
		}
	
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	lcm_method(a,b);
}
