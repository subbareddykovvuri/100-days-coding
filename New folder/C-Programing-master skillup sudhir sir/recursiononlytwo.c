#include<stdio.h>
void only_two(int n1,int n2,int n3,int rot)
{
	int i,sum;
	
	   if(rot==1)
	   {
	   	return;
	   }
	    sum=n1+n2; 
	    n1=n2;
	    n2=n3;
	    n3=sum;
	   printf("%d ",n3);
	   return only_two(n1,n2,n3,rot-1);
	
	
}
int main()
{
	int n1,n2,n3,rot;
	scanf("%d%d%d%d",&n1,&n2,&n3,&rot);
	only_two(n1,n2,n3,rot);
}
