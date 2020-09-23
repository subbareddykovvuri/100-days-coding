#include<stdio.h>
void count_digits(int n)//fun def
{
	int r,od=0,ed=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		{
			ed++;
		}
		else
		{
			od++;
		}
	}
	printf("%d %d",ed,od);
	if(ed>od)
	{
		printf("Even");
	}
	else if(od>ed)
	{
		printf("Odd");
	}
	else
	{
		printf("Both");
	}
}
int main()//
{
	int n;
	scanf("%d",&n);
	count_digits(n);//fun call
}







