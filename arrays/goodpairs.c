#include<stdio.h>
int goodpairs(int *arr,int n)
{
	int count=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count+=1;
			}
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
