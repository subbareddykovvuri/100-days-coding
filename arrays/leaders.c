#include<stdio.h>
int * fun(int *arr,int *n){
	static int i,lead[100],j=0;
	lead[j]=arr[*n-1];
	for(i=*n-2;i>=0;i--){
		if(arr[i]>lead[j]){
			lead[++j]=arr[i];
		}
	}
	int lead1[j+1];
	for(i=0;i<j+1;j++){
		lead1[i]=lead[j+1-i];
	}
	*n=j+1;
	return lead1;
}
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	int *res;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	res=fun(a,&n);
	for(i=0;i<n;i++){
		printf("%d ",res[i]);
	}
}
/*leaders
7
7 10 4 10 6 5 2
*/
