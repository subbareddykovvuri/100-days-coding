#include<stdio.h>
int flower(int *arr,int n,int n1){
	int i,count=0;
	for(i=0;i<n;i++){
		if(arr[i]==0){
			if(arr[i-1]!=1 && arr[i+1]!=1){
				count++;
				arr[i]=1;
			}
		}
	}
	if(n1<=count){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n,i,n1;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&n1);
	if(flower(arr,n,n1)){
		printf("True");
	}
	else{
		printf("False");
	}
	
}
/*
5
1 0 0 0 1
1


8 
0 0 0 0 0 1 0 0
*/
