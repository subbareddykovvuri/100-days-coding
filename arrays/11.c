#include<stdio.h>
int fun(int *a,int n)
{
	int i,c=0,c1=0;
	for(i=0;i<n-1;i++){
		if(a[i]<=a[i+1]){	
			c++;
		}
	
		if(a[i]>=a[i+1]){
			c1++;
		}
	}
	if(c1==n || c==n){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",fun(arr,n));
	return 0;
}
