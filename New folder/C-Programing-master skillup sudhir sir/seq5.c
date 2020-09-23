#include<stdio.h>
#include<math.h>
// 2 2 4 3 6 5 8 7 10 11 12 13 14 17............
int next_prime(n)
{
	int i,fc=0;
	while(1)
	{
		n=n+1;
		fc=0;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				fc=1;
				break;
			}
		}
		if(fc==0)
		{
			return n;
		}
	}
}
int fun(num,n,m)//10,2,2
{
	static int i=1,j=1;//3
	if(num%2==0)
	{
		if(i==num/2)//
		{
			return n;
		}
		n=next_prime(n);
		i++;
		return fun(num,n,m);
	}
	else
	{
		if(j==num/2+1)
		{
			return m;
		}
		j++;
		return fun(num,n,m+2);
	}
}


int main()
{
	int num,n=2,m=2;
	scanf("%d",&num);
	printf("%d",fun(num,n,m));	
}
// 2 2 4 3 6 5 8 7 10 11 12 13 14 17.............


//9/2-->4

