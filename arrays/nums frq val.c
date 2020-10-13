#include<stdio.h>
int fun(int *arr,int n)
{
	int i,a[100],j,k=0;
	for(i=0;i<n;i+=2){
		for(j=0;j<arr[i];j++)
		{
			a[k]=arr[i+1];
			k+=1;
		}
	}
	
	for(i=0;i<k;i++)
	{
		arr[i]=a[i];
	}
	
	return k;
}
int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=fun(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
/*
4
1 2 3 4
*/
