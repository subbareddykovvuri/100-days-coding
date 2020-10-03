#include<stdio.h>
#include<stdlib.h>
int fun_cmp(const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}
int main(){
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),fun_cmp);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
/*
7
4 3 2 7 7 5 3
2 3 3 4 5 7 7
*/
