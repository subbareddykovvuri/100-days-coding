#include<stdio.h>
#include<math.h>
void fun(int n)//10;3;5;11;36;6;2;1
{
	printf("%d ",n);
	if(n==1)
		return;
	if(n%2==0)
	{
		n=sqrt(n);//1
	}
	else
	{
		n=sqrt(n)*sqrt(n)*sqrt(n);//36
	}
	fun(n);
}

int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	return 0;
}

/*
10
10 3 5 11 36 6 2 1 

*/
