#include<stdio.h>
int reverse(int num)
{
	int r,rev=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	printf("%d\n",rev);
	return rev;
}
int exchange_num(int num)
{
	int l,f,m=0,r,c=1;
	while(num)
	{
		r=num%10;
		num=num/10;//1234
		if(c==1)
		{
			f=r;//f=4
		}
		else if(num==0)
		{
			l=r;//l=1
		}
		else
		{
			m=m*10+r;//
		}
		c=c*10;
	}
	m=reverse(m);//fun call  32
	//printf("%d  %d  %d   %d\n",f,l,c/10,m);
	return (f*c/10)+(m*10+l);
	
}
//n=1234   f=4  l=1   m=23--->4231
int main()
{
	int num;
	scanf("%d",&num);
	num=exchange_num(num);
	printf("%d",num);
	return 0;
}

/*
1234
asc
4321
desc

1324
Mixed
*/


/*
43726
25364
12345
*/







