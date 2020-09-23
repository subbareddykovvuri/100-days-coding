#include<stdio.h>
void only_two(int n1,int n2,int n3,int rot)
{
	int i,sum;
	for(i=4;i<=rot;i++)//1 112
	{
	    sum=n1+n2; 
	    n1=n2;
	    n2=n3;
	    n3=sum;
	   printf("%d ",n3);
	   
	}
	
}
int main()
{
	int n1,n2,n3,rot;
	scanf("%d%d%d%d",&n1,&n2,&n3,&rot);
	only_two(n1,n2,n3,rot);
}
