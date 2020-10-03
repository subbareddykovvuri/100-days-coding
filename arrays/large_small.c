#include<stdio.h>
#include<stdlib.h>
void * large_small(int *arr,int n){
	int i,j,temp1=0,temp2=arr[n-1];
	static int b[2]={0,arr[0]};
	
	for(i=0,j=n-1;i<=j;i++,j--){
		if(i==j){
			if(arr[i]>b[0]){
				b[0]=arr[i];
			}
			if(b[0]<temp1){
				b[0]=temp1;
			}
			if(arr[i]<b[1]){
				b[1]=arr[i];
			}
			if(b[1]>temp1){
				b[1]=temp1;
			}
		}
		else
		{
			if(arr[i]>b[0]){
				b[0]=arr[i];
			}
			if(arr[j]>temp1){
				temp1=arr[j];
			}
			if(arr[i]<b[1]){
				b[1]=arr[i];
			}
			if(arr[j]>temp1){
				temp1=arr[j];
			}
		}

		
	}
	return b;
}
int main(){
	int n,i,*ls;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	ls=large_small(arr,n);
	printf("largest element of the array = %d",ls[0]);
	printf("smallestest element of the array = %d",ls[1]);
}
