#include<stdio.h>
int asc_desc(int n)//n>=10
{
	int f,r;//1324
	r=n%10;
	if(n%10>n%100/10)//4>2
	{
		f=1;//asc
	}
	else
	{
		f=0;//desc
	}
	while(n)//
	{
		if((n%10)==0)//
		{
			break;//
		}
		if((f==1 && r<n%10) ||(f==0 && r>n%10))//
		{
			f=2;
			break;
		}
		r=n%10;//
		n=n/10;//
	}
	return f;
}
int main()
{
	int num,r;
	scanf("%d",&num);
	r=asc_desc(num);//fun call
	printf("%d",r);
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










