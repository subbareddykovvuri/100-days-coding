#include<stdio.h>
/*void fun(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}*/

int *copy(int *arr,int n){
	return arr;
}
int main(){
	/*int marks[]={1,2,3,4,5,6};
	printf("%d",sizeof(marks));//6*4=24*/
	
	int arr[100],n,i,*b;//array declaration
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);//reading of array elements
	}
	/*for(i=0;i<n;i++){
		printf("%d ",arr[i]);//access
	}*/
	/*printf("%d ",&n);//
	printf("%d ",arr);//address
	printf("%d ",*arr);//value
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}*/
	//fun(arr,n);//fun call
	
	b=copy(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
	
}

// reading , access
//fun arg
//fun return
//dynamic
