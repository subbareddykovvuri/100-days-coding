#include<stdio.h>
void largest_ele(int *arr,int n,int *large){
	int i,temp;
	for(i=0;i<n;i++){
		if(arr[i]>temp)
		{
			temp=arr[i];
		}
	}
	for(i=0;i<n;){
		if(arr[i]==temp){
			arr[i]=arr[i+1];
			n--;
		}
		
		
	}
	for(i=0;i<n-1;i++){
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
