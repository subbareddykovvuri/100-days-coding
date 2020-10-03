#include<stdio.h>
#include<stdlib.h>
int second_max(int *arr,int n){
	int i,max,smax;
	max=smax=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	for(i=1;i<n;i++){
		if(arr[i]!=max && smax<arr[i]){
			smax=arr[i];
		}
	}
	return smax;
}
int main(){
	int n,arr[100],i,s1;
	scanf("%d",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
