#include<stdio.h>
#include<stdlib.h>
int * find_min_max(int *arr,int n){
	int i;
	static int mm[2];//int *min_max;min_max=malloc(2*(sizeof(int *));
	mm[0]=mm[1]=arr[0];//mm[0]-->min; mm[1]-->max
	for(i=1;i<n;i++){
		if(mm[0]>arr[i])
		{
			mm[0]=arr[i];
		}
		if(mm[1]<arr[i])
		{
			mm[1]=arr[i];
		}
	}
	return mm;
}
int main(){
	int n,arr[100],i,*min_max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min_max=find_min_max(arr,n);
	printf("%d %d",min_max[0],min_max[1]);
	retrun 0;
}
