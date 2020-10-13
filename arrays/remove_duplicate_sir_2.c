#include<stdio.h>
int * remove_duplicate(int *arr,int *n)
{
	int i=0,j=0;
	static int a[];
	a[j]=arr[i];
	for(i=1;i<*n;i++)
	{
		if(a[j]!=arr[i]){
			a[++j]==arr[i];
		}
	}
	*n=j+1;
	return a;
}

int main()
{
	int n,i,*arr;
	scanf("%d",&n);
	arr=malloc(n*sizof)
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	*a=remove_duplicate(arr,&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
