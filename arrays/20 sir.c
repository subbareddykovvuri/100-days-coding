#include<stdio.h>
int cmpfun(const void *a,const void *b){
	return(*(int*)a-*(int*)b);
}
int fun(int *arr,int n){
	qsort(arr,n,sizeof(int),cmpfun);
	int i;
	for(i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			return 1;
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
