#include<stdio.h>
void big_num(int n)
{
	int r,r1,r2,fn=0,g,h=0,c=1,d;
	r=n%10;
	r1=r;
	while(n)
	{
	r=n%10;
	n=n/10;
	if(r==r1)
	{
		c=c*10;
		continue;
		
	}
	if(n==0){
		r2=r;
//		c=c*10;
		continue;
	
	}
	fn=fn*10+r;
	c=c*10;
	}
	while(fn){
		g=fn%10;
		fn=fn/10;
		h=h*10+g;
	}
	
	//printf("%d \n",c);
    if(r1>r2){
       d=((r1*c)+(h*10+r1));  	
	}
	else{
	   d=((r2*c)+(h*10+r2));	
	}
//    d=((r1*c)+(h*10+r2));
    printf("total is %d\n",d);
//	printf(" last and  1st numbers are %d %d",r1,r2);
}
int main()
{
	int n;
	scanf("%d",&n);
	big_num(n);
}
