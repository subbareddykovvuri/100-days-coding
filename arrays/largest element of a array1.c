#include<stdio.h>
void largest_ele(int *arr,int n,int *large){
	int i,j,temp=0;
	for(i=0,j=n-1;i<=j;i++,j--){
		if(i==j){
			if(arr[i]>*large){
				*large=arr[i];
			}
			if(*large<temp){
				*large=temp;
			}
		}
		else
		{
			if(arr[i]>*large){
				*large=arr[i];
			}
			if(arr[j]>temp){
				temp=arr[j];
			}
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
