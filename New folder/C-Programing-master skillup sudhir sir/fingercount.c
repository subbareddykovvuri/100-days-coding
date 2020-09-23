#include<stdio.h>
void finger_est(int n)
{
	int i,j=1,k=5;
for(i=1;i<=n;i++)
{
	if(j>k && k!=0)
	{
	
	k=k-1;
	if(k==0)
	{
		
		printf("%d is in forward direction \n",i);
	 //	printf("%d %d \n",j,k);
	}
	if(k>0)
	{
	j--;
	 printf("%d is in backward direction \n",i);
	 
	}
}
    else  if(k==0)
	{
     printf("%d is in forward direction \n",i);		
	   k=4;  
	
	}
	else
	{
		printf("%d is in forward direction \n",i);
		j=j+1;
		//printf("j is %d",j);
	}
}
}
int main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	finger_est(n);
}
