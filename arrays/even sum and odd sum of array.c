#include<stdio.h>
void e_o_arr_sum(int *arr,int n,int *even,int *odd){
	int i;
	for(i=0;i<n;i++){
		if((arr[i]%2)==0){
			*even+=arr[i];
		}
		else{
			*odd+=arr[i];
		}
	}
	

}
int main(){
	int n,i,even=0,odd=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	e_o_arr_sum(arr,n,&even,&odd);
	printf("even= %d \nodd= %d",even,odd);
}
