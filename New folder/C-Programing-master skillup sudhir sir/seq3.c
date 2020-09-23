#include<stdio.h>
void fun(int n1,int n2,int n3,int r)//10 9 8 7 1 0
{
	if(r<=0)
	{
		return;
	}
	if(n1==1 && n2==1 && n3==1)
	{
		if(r==1)
			printf("%d ",n1);
		else if(r==2)
			printf("%d %d ",n1,n2);
		else
			printf("%d %d %d ",n1,n2,n3);
		return fun(n2,n3,n1+n2,r-3);
	}
	printf("%d ",n1+n2);
	return fun(n2,n3,n1+n2,r-1);	
}
int main()
{
	int n1=1,n2=1,n3=1,r;
	scanf("%d",&r);
	fun(n1,n2,n3,r);
	return 0;
}
 
//         n1  n2   n3
// 1   1     1  2   2


//n1=n2
// n2=n3






