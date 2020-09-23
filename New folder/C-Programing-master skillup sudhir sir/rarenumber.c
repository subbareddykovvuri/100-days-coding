#include<stdio.h>
#include<math.h>
int rare_number(int n)
{
	int r,sum=0;
	while(n)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
int rare_num(int add,int sub)
{
	int sqradd,sqrsub;
//printf("%d %d",add,sub);	
sqradd=sqrt(add);
sqrsub=sqrt(sub);

if((sqradd*sqradd)==add && (sqrsub*sqrsub)==sub)
{
	return 1;
}
}
int main()
{
	int n,res,add,sub,final;
	scanf("%d",&n);
	res=rare_number(n);
//	printf("%d",res);
	add=n+res;
	sub=n-res;
	//printf("%d %d",add,sub);
	final=rare_num(add,sub);
	if(final==1)
	{
		printf("Rare number");
	}
	else
	{
		printf("not a rare number");
	}
}
