#include<stdio.h>
void del(int *arr,int n,int pos){
	int i;
	for(i=pos;i<n;i++){
		arr[i]=arr[i+1];
	}
}
int fun(int *arr,int n){
	int i,j=0;
	
	for(i=0;i<n;i++){
		if(n==1){	
			break;	
		}
		if(i==n-1){
			del(arr,n,0);
			n--;
			i=0;
		}
		del(arr,n,i+1);
		n--;
			
			
	}
	
	return arr[0];
}
int main(){
	int n,i,res;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		arr[i]=i+1;
	}
	res=fun(arr,n);
	printf("\n%d ",res);
}
/*
1 2 3 4 5
1 3 5
3
*/

