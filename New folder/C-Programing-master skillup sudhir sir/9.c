#include<stdio.h>
int search_digit(int num,int digit)
{
	int r;
	while(num)//1234 8
	{
		r=num%10;//2
		num=num/10;//1
		if(digit==r)//2==2
		{
			return 1;
		}
	}
	return 0 ;
}
int main()
{
	int num,digit,r;
	scanf("%d%d",&num,&digit);
	r=search_digit(num,digit);//fun call
	if(r==1)
	{
		printf("True");
	}
	else if(r==0)
	{
		printf("False");
	}
	
	return 0;
}

/*
sample input:
1234  2
sample output:
True/False

*/

/*
n=1234
r=n%10-->4
n=n/10-->123

r=n%10-->3
n=n/10-->12

r=n%10---> 2
n=n/10---> 1

r=n%10--->1
n=n/10--->0
*/










