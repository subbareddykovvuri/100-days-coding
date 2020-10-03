#include<stdio.h>
#include<stdlib.h>
int del_value(int *arr,int n,int val){
	int i=0,j=0;
	int *b;
	b=malloc(sizeof(int *)*n);
	for(i=0,j=0;j<n;i++)
	{
		if(arr[i]!=val)
		{
			b[j++]=arr[i];
		}
	}
	
}
int main(){
	int n,i,val;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	n=del_value(arr,n,val);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
/*
10 
1 2 3 4 5 6 7 8 9 10
val=3;
delete=3;
1 2 4 5 6 7 8 9 10

ex=2
10
 1 2 3 4 5 4 3 5 2 1
 del=3
  1 2 4 5 4 5 2 1
*/
