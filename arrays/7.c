#include<stdio.h>
void fun(int *nums,int *index,int *target,int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{	
		if(target[index[i]]!=-1){
			for(j=index[i];j<n;j++){
				
				if(target[j]==-1){
					break;
				}
			}
			for(k=j;k>index[i];k--){
				target[k]=target[k-1];
				printf("%d\n",k);
			}
		}
		target[index[i]]=nums[i];
	}	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int nums[n],index[n],target[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&index[i]);
	}
	for(i=0;i<n;i++)
	{
		target[i]=-1;
	}
	fun(nums,index,target,n);
	for(i=0;i<n;i++){
		printf("%d ",target[i]);
	}
}
/*
5
0 1 2 3 4
0 1 2 2 1
*/
