#include<stdio.h>
int fun(int *arr,int n)
{
	int i,j,k,a[100],f;
	for(i=0,j=0;i<n;i++)
	{
		f=0;
		for(k=0;k<j;k++){
			if(arr[i]==a[k])
			{
				f=1;
				break;
			}
		}
		if(f==0){
			a[j++]=arr[i];
		}
	}
	for(i=0;i<j;i++){
		arr[i]=a[i];
	}
	return j;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=fun(arr,n);
	for(i=0;i<j;i++){
		printf("%d ",arr[i]);
	}
}

