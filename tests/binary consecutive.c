#include<stdio.h>
int consecutive(int *arr,int n){
	int i,j=0,count=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		if(arr[i]==1){
			count++;
			
			if(i==n-1){
				a[j]=count;	
				j++;
			}	
		}    	
		else{
			
			a[j]=count;
			count=0;
			j++;
		}
	}
	
	int max=0;
	for(i=0;i<j;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int main(){
	int n,i,max;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=consecutive(arr,n);
	printf("%d",max);
}
/*
6
1 1 0 1 1 1
*/
