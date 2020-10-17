#include<stdio.h>
void fun(int *a,int n){
	int i,j;
	for(i=0;i<n;i++){
		if(a[i]==0){
			for(j=n;j>i;j--){
				a[j]=a[j-1];
			}
			i++;
		}
	}
	
}
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	fun(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
/*
8
1 0 2 3 0 4 5 0
*/
