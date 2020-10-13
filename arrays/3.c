#include<stdio.h>
void fun(int *arr,int n){
	int i,a[n*2],j;
	for(i=0,j=0;i<n;i++){
		a[j]=arr[i];
		a[j+1]=arr[i+n];
		j+=2;
	}
	for(i=0;i<(n*2);i++){
		arr[i]=a[i];
	}
}
int main(){
	int n,i,m;
	scanf("%d",&n);
	m=n*2;
	int arr[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	fun(arr,n);
	for(i=0;i<m;i++){
		printf("%d ",arr[i]);
	}
}
/*
3
2 5 1 3 4 7
 2 3 5 4 1 7
 */
