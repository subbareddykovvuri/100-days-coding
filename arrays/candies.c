#include<stdio.h>
void candies(int *arr,int n,int c)
{
	int max=arr[0],i;
	for(i=1;i<n;i++){
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if((arr[i]+c)<max)
		{
			arr[i]=0;
		}
		else{
			arr[i]=1;
		}
	}
}
int main()
{
	int n,i,c;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&c);
	candies(arr,n,c);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
/*
5
2 3 5 1 3
3
1 1 1 0 1
*/
