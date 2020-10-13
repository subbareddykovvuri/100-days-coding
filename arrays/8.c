#include<stdio.h>
void fun(int *prices,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
			if(prices[j]<=prices[i])
			{
				prices[i]=prices[i]-prices[j];
				
				j=n;
			}
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
