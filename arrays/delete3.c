#include<stdio.h>
void del(int *arr,int *n,int pos){
	int i;
	if(pos<=*n-1)
	{
		for(i=pos;i<*n;i++){
			arr[i]=arr[i+1];
		}
		*n-=1;	
	}
	else{
		printf("not in range");
	}

}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int pos;
	scanf("%d",&pos);
	del(arr,&n,pos);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
/*
5
1 2 3 4 5
2
1 2 4 5
*/
