/*
7
1 0 2 0 0 3 4
1 2 3 4 0 0 0
*/
#include<stdio.h>
void move_zeros(int *arr,int n){
	int i,temp,j,a[n];
	for(i=0,j=0;i<n;i++){
		if(arr[i]!=0){
			a[j]=arr[i];
			j++;
		}
	}
	for(i=0;i<n;i++){
		if(i<j){
			arr[i]=a[i];
		}
		else{
			arr[i]=0;
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
