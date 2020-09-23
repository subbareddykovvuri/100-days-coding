#include<stdio.h>
#include<math.h>
// 28--> 1 2 14 4 7
int isperfect(num)
{
	int i,sum=0;
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)//2
		{
			printf("%d %d\n",i,num/i);
			sum=sum+i+(num/i);
		}	
	}
	return sum+1==num;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(isperfect(num))// 1/0
	{
		printf("Perfect");
	}
	else
	{
		printf("Not perfect");
	}
}
