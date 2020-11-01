/*
stock buy and sell
*/
#include<stdio.h>
int fun(int *arr,int n){
	int i,profit=0;
	for(i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			profit+=arr[i]-arr[i-1];
		}
	}
	return profit;
}

int main(){
	int n,i,profit;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	profit=fun(arr,n);
	printf("%d",profit);
	return 0;
}
