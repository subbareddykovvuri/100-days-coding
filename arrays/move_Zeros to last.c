/*
7
1 0 2 0 0 3 4
1 2 3 4 0 0 0
*/
#include<stdio.h>
void move_zeros(int *arr,int n){
	int i,temp,j;
	for(i=0;i<n;i++){
		if(arr[i]==0){
			for(j=i;j<n;j++){
				if(arr[j]!=0){
					arr[i]=arr[j];
					arr[j]=0;
					j=n;
				}
			}
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
