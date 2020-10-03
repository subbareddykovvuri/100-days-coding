#include<stdio.h>
#include<stdlib.h>
int fun_cmp(const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}
int second_max(int *arr,int n){
	int i;
	for(i=n-1;i>=0;i--){
		if(arr[i]!=arr[n-1])
		{
			return arr[i];
		}
	}
	return -1;
}
int main(){
	int n,arr[100],i,sl;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),fun_cmp);
	
}
/*
7
4 3 2 7 7 5 3
2 3 3 4 5 7 7
*/
