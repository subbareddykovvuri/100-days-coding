#include<stdio.h>
void binary(int n)
{
	int r,f=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r==0||r==1)
		{
			f=1;
		}
		else{
			f=2;
			break;
			}
	}
	if(f==1)
	{
		printf("binary");
	}
	else if(f==2)
	{
		printf("not a binary");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	binary(n);
}
