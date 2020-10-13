#include<stdio.h>
void fun(int *arr,int n,int ec)
{
	int i,m=arr[0];
	for(i=0;i<n;i++)
	{
		if(m<arr[i])
		{
			m=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]+ec>=m)
		{
			arr[i]=1;
		}
		else{
			arr[i]=0;
		}
	}
}
int main()
{
	int arr[100],n,i,ec;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	fun(arr,n,ec);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
