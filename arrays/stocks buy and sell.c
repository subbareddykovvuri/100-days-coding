/*
stock buy and sell
*/
int fun(int *arr,int n){
	int i,profit=0,buy=arr[0];
	for(i=1;i<n;i++){
		if(buy<arr[i]){
			profit+=arr[i]-buy;
			buy=arr[i];
		}
		else{
			buy=arr[i];
		}
	}
	return profit;
}
#include<stdio.h>
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
