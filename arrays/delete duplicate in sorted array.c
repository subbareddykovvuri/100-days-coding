#include<stdio.h>
int duplicate_rem(int *arr,int n)
{
	int i,j;
	for(i=1;i<n;)
	{
		if(arr[i-1]==arr[i]){
			n--;
			for(j=i;j<n;j++){
				arr[j]=arr[j+1];
			}
		}
		else{
			i++;
		}
	}
	return n;
}

int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=duplicate_rem(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
