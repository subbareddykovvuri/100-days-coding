#include<stdio.h>
int form_num(int num,int type)
{
	int r,fn=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		if(type==0 && r%2==1)
		{
			fn=fn*10+r;
		}
		else if(type==1 && r%2==0)
		{
			fn=fn*10+r;
		}

	}
	return fn;
}
int main()
{
	int num,even,odd;
	scanf("%d",&num);
	even=form_num(num,1);
	odd=form_num(num,0);
	printf("%d  ",even);
	printf("%d",odd);
	return 0;
}

/*
sample input:
1234  8
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










