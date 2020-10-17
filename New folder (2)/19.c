#include<stdio.h>
void arrayReverse(int len,int *arr)
{
int i,temp,originallen=len;
for(i=0;i<=originallen/2;i++)//50 30 10 40 2O
	{
	
	temp=arr[len-i-1];//20
	arr[len-i-1]=arr[i];//
	arr[i]=temp;//
	}
}



int main()
{
int i,len,arr[100];
scanf("%d",&len);
for(i=0;i<len;i++)
{
scanf("%d",&arr[i]);
}
arrayReverse(len,arr);
for(i=0;i<len;i++)
{
printf("%d ",arr[i]);
}
}
