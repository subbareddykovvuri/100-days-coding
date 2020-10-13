#include<stdio.h>
void fun(int *prices,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		j=i+1;
		if(prices[i]>=prices[j])
		{
			prices[i]=prices[i]-prices[j];
			i++;
		}
		else
		{
			j++;
		}
		
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int prices[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&prices[i]);
	}
	
	fun(prices,n);
	for(i=0;i<n;i++){
		printf("%d ",prices[i]);
	}
}
/*
5
8 4 6 2 3
4 2 4 2 3

*/
