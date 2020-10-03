#include<stdio.h>
void fun1(int *arr){
	int i;
	printf("%d\n",sizeof(*arr));
	for(i=0;i<sizeof(arr);i++){
		printf("%d ",arr[i]);
	}
	
}
int main(){
	//int n;
	//scanf("%d",n);
	int *arr={1,2,3,4,5,6,7,8,9};
	printf("%d \n",sizeof(arr));
	printf("%d %d %d \n",arr,*arr,arr[3]);
	fun1(*arr);
	
	return 0;
}
