#include<stdio.h>
#include<stdlib.h>
void * arr_sum(int *arr,int n){
	int i=0,*b;
	b=(int *)calloc(sizeof(int *),4);
	for(i=0;i<n;i++){
		if((arr[i]%2)==0){
			b[0]++;
			b[1]+=arr[i];
		}
		else{
			b[2]++;
			b[3]+=arr[i];
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
