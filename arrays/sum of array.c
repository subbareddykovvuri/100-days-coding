//sum of array elements
#include<stdio.h>
int sum_arr(int *arr,int n){
	int sum=0,i;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
int main(){
	int n,i,sum;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sum=sum_arr(arr,n);
	printf("%d",sum);
}
