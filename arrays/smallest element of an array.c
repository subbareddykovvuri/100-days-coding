#include<stdio.h>
void smallest_ele(int *arr,int n,int *small){
	int i;
	*small=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<*small)
		{
			*small=arr[i];
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
