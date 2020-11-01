#include<stdio.h>
int fun(int *arr,int n){
	int i,j=0;
	for(i=0;i<n;i++){
		if(arr[i]==arr[j] && i!=j){
			return 1;
		}
		if(i==n-1){
			i=j;
			j=j+1;
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(fun(arr,n)){
		printf("True");
	}
	else{
		printf("False");
	}
	
}
