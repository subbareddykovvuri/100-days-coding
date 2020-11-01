#include<stdio.h>
void fun(int *arr,int n){
	int i,j=0,k=arr[0],count=1;
	for(i=1;i<n;i++){
		if(k==arr[i]){
			count+=1;
		}
		else{
			printf("%d  %d\n",k,count);
			count=1;
			k=arr[i];
		}
	}
	printf("%d  %d\n",k,count);
	
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	fun(arr,n);
	return 0;
}
/*10 10 10 20 20 30 

10 3 
20 2
30 1
*/
