#include<stdio.h>
void reverse(int *arr,int n)
{
	int i;
	for(i=0;i<(n/2);i++)
	{
		arr[i]=arr[i]+arr[n-i-1];
		arr[n-i-1]=arr[i]-arr[n-i-1];
		arr[i]=arr[i]-arr[n-i-1];
	}
	
}

int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
