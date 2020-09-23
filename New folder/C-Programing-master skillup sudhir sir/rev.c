#include<stdio.h>
void end_start(int n)
{
	int r,r1,r2,fn=0,g,h=0;
	r=n%10;
	r1=r;
	while(n)
	{
	r=n%10;
	n=n/10;
	if(r==r1)
	{
		continue;
	}
	if(n==0){
		r2=r;
		continue;
	
	}
	fn=fn*10+r;
	}
	while(fn){
		g=fn%10;
		fn=fn/10;
		h=h*10+g;
	}
	printf("%d%d%d",r1,h,r2);
}
int main()
{
	int n;
	scanf("%d",&n);
	end_start(n);
}
