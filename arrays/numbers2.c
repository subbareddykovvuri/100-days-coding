#include<stdio.h>
int max(int *arr,int n){
	int max,i;
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
}
int fun(int *arr,int n)
{
	int i,j=0,*a,m,*b;
	m=max(arr,n);
	a=calloc(m,sizeof(int *));
	b=calloc(m,sizeof(int *));
	for(i=0;i<n;i++)
	{
		a[arr[i]-1]++;
	}
	for(i=0;i<n;i++)
	{
		if(a[arr[i]-1]!=0)
		{
			b[j++]=arr[i];
			a[arr[i]-1]=0;
		}
	}
	for(i=0;i<n;i++){
		arr[i]=b[i];
	}
	
	return j;
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=fun(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

