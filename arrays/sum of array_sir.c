//sum of array elements
#include<stdio.h>
int sum_array(int *arr,int n){
	int sum=0,i,j;
	for(i=0,j=n-1;i<j;i++,j--){
		if(i==j){
			sum+=arr[i];
		}
		sum+=arr[i]+arr[j];
		
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
	sum=sum_array(arr,n);
	printf("%d",sum);
}
