#include<stdio.h>
void table_display(int n,int r)
{
	int i;
	for(i=1;i<=r;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
}
int main()
{
	int n,r;
	scanf("%d%d",&n,&r);
	table_display(n,r);//call
	return 0;
}
// n r
//5 10
/* 5 1= 5
5 10 =50
*/
