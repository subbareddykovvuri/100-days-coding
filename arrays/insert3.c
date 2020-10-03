#include<stdio.h>
void insert(int *arr,int n,int pos,int val,int *b)
{
	int i,j;
	for(i=0,j=0;i<n;j++)
	{
		if(j==pos)
		{
			b[j]=val;
		}
		else
		{
			b[j]=arr[i++];
		}
	}
}
int main()
{
	int n,arr[100],i,pos,val,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&pos,&val);
	insert(arr,n,pos,val,b);
	for(i=0;i<=n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
