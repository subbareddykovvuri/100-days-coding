#include<stdio.h>
int goodpairs(int *arr,int n)
{
	int count=0,i,a[100]={0};
	for(i=0;i<n;i++)
	{
		a[arr[i]-1]++;
	}
	for(i=0;i<100;i++)
	{
		if(a[i]>1)
		{
			count+=(a[i]*(a[i]-1))/2;
		}
	}
	return count;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",goodpairs(arr,n));
}
/*
6
1 2 3 1 1 3

4*/
