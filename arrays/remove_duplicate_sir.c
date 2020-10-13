#include<stdio.h>
int remove_duplicate(int *arr,int n)
{
	int i=0,j=0,a[n];
	a[j]=arr[i];
	for(i=1;i<n;i++)
	{
		if(a[j]!=arr[i]){
			a[++j]==arr[i];
		}
	}
	for(i=0;i<=j;i++){
		arr[i]=a[i];
	}
	return j+1;
}

int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=remove_duplicate(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
