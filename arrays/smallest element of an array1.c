#include<stdio.h>
void smallest_ele(int *arr,int n,int *small){
	int i,j,temp=arr[n-1];
	*small=arr[0];
	for(i=0,j=n-1;i<=j;i++,j--){
		if(i==j){
			if(arr[i]<*small){
				*small=arr[i];
			}
			if(*small>temp){
				*small=temp;
			}
		}
		else
		{
			if(arr[i]<*small){
				*small=arr[i];
			}
			if(arr[j]>temp){
				temp=arr[j];
			}
		}

		
	}
	
}
int main(){
	int n,i,*small=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	smallest_ele(arr,n,&small);
	printf("smallest element of the array = %d",small);
}
