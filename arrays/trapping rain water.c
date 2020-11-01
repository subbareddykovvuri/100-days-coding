/*trapping rain water

2 0 2 

*/
#include<stdio.h>
int fun(int *arr,int n){
	int i,rmax=arr[0],lmax=0,j,count=0;
	for(i=1;i<n-1;i++){
		for(j=0;j<i;j++){
			if(rmax<arr[j]){
				rmax=arr[j];
			}
		}
		for(j=i+1;j<n;j++){
			if(lmax<arr[j]){
				lmax=arr[j];
			}
		}
		if(rmax<=lmax && rmax>arr[i]){
			count+=rmax-arr[i];
		}
		else if(rmax>lmax && lmax>arr[i]){
			count+=lmax-arr[i];
		}
		rmax=0;
		lmax=0;
			
	}
	return count;
}

int main(){
	int n,count;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	count=fun(arr,n);
	printf("%d",count);
}
