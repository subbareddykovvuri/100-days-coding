#include<stdio.h>
void scramble_num(int n)
{
int r,sum=0,c=1;
while(n)
{
 r=n%10;
 n=n/10;
 c=c*10;
 }
 printf("%d",c);
}
int main()
{
	int n;
	scanf("%d",&n);
	scramble_num(n);
}
