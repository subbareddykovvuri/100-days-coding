#include<stdio.h>
void largest_ele(int *arr,int n,int *large){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]>*large)
		{
			*large=arr[i];
		}
	}
	
}
int main(){
	int n,i,*large=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	largest_ele(arr,n,&large);
	printf("largest element of the array = %d",large);
}
