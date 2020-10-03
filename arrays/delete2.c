#include<stdio.h>
void del(int *arr,int n,int pos){
	int i,t1,t2;
	t1=arr[n-1];
	for(i=n-1;i>pos;i--){
		t2=arr[i-1];
		arr[i-1]=t1;
		t1=t2;
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int pos;
	scanf("%d",&pos);
	del(arr,n,pos);
	for(i=0;i<n-1;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
/*
5
1 2 3 4 5
2
1 2 4 5
*/
