#include<stdio.h>
void insert2(int *arr,int *n,int pos,int val)
{
	int i,j;
	if(pos<*n)
	{
		for(i=*n-1;i>=pos;i--)
		{
			arr[i+1]=arr[i];
		}	
	}
	else{
		arr[*n]=val;
	}
	*n+=1
}
int main()
{
	int n,arr[100],i,pos,val;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&pos,&val);
	insert(arr,&n,pos,val);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
