#include<stdio.h>
void fun(int num)//10; 1 2 5
{
	int i,sum;
	while(1)
	{
		sum=0;
		printf("%d ",num);
		if(num==1)
		{
			break;
		}
		for(i=1;i<=num/2;i++)//4<=5
		{
			if(num%i==0)
			{
				//printf("%d ",i);//1 2 3 4 5
				sum=sum+i;
			}
		}
		//printf("\n%d",sum);
		if(sum==num)
		{
			break;
		}
		num=sum;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	fun(num);
	return 0;
}
