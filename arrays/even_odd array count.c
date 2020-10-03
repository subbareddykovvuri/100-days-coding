#include<stdio.h
void e_o_arr(int *arr,int n,int *even,int *odd){
	int i;
	for(i=0;i<n;i++){
		if((arr[i]%2)==0){
			*even+=1;
		}
		else{
			*odd+=1;
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
	e_o_arr(arr,n,&even,&odd);
	printf("even= %d \nodd= %d",even,odd);
}
