/*
7
1 0 2 0 0 3 4
1 2 3 4 0 0 0
*/
#include<stdio.h>
void move_zeros(int *arr,int n){
	int i,j,temp;
	for(i=0,j=0;i<n;i++){
		if(arr[i]!=0){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
		}
	}
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	move_zeros(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
