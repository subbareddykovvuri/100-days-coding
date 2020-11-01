#include<stdio.h>
void fun(int *arr,int n,int s,int d,int *v1,int *v2){
	int i;
	for(i=0;i<n;i++){
		if(i>=s && i<d){
			*v1+=arr[i];
		}
		else{
			*v2+=arr[i];
		}
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i,s,d;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&s);
	scanf("%d",&d);
	int min,v1=0,v2=0;
	fun(arr,n,s,d,&v1,&v2);
	
	if(v1<=v2){
		min=v1;
	}
	else{
		min=v2;
	}
	printf("Distance between %d and %d is %d or %d, minimum is %d",s,d,v1,v2,min);
}
/*
4
1 2 3 4
0 
1
Distance between 0 and 1 is 1 or 9, minimum is 1
*/
