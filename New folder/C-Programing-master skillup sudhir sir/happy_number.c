#include<stdio.h>
void fun(int n)//
{
	static int i=1;
	if(i>=n)
	{
		printf("%d ",n--);	
		i--;
	}
	else
	{
		printf("%d ",i++);//2
	}
	if(i==0)
		return;
	fun(n);//fun(5)
}
//n-(n-1)
//1
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
}
//5
//1 2 3 4 5 4 3 2 1
// 

//3 5  6
//3 0
//0 3
//3 3














