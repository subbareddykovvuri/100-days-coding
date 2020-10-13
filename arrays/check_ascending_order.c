#include<stdio.h>
int check_ascending(int *arr,int n){
	int i;
	for(i=1;i<n;i++){
		if(arr[i-1]>arr[i]){
			return 0;
		}	
	}
	return 1;
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(check_ascending(arr,n)){
		printf("the array is in ascending order");
	}
	else{
		printf("the array is not in ascending order");
	}
	
}
/*
5
1 2 3 4 5
true
5
2 3 4 1 5
false
*/
