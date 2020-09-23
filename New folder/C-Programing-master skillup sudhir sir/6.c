#include<stdio.h>
void type_number(int num)
{
	int d,f=1,n;//f-->1 means even number; f-->0 means odd number
	n=num;//copy
	while(num)
	{
		d=num%10;//d=3 num=123 f=1
		num=num/10;//1
		if(n%2==0 && d%2==1)//f==1 && 3%2==1
		{
			f=2;
			break;
		}
		else if(n%2==1 && d%2==0)//1==0
		{
			f=2;
			break;
		}
	}
	if(f==1 && n%2==0)
	{
		printf("EVEN");
	}
	else if(f==1 && n%2==1)
	{
		printf("ODD");
	}
	else
	{
		printf("MIXED");
	}
	
}
int main()
{
	int num;
	scanf("%d",&num);
	type_number(num);//fun call
	return 0;
}

/*
2468
d=8

1357
d=7

1237
d=7

1324
d=4

*/









