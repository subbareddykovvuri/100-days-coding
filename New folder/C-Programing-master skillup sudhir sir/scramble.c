#include<stdio.h>
void big_small(int n)
{ 
int r,r1,f=0,h=0;
	r=n%10;
	while(n)
	{
		r1=n%10;
		if(r1<r)
		{
		 	f=f+1;
		 	if((n/10)==0)
		 	{
		 	    r1=r1;	
			 }
			 else if((n/10)!=0)
			 {
			 	r=r1;
			 }
		 
		}
		else if(r1>r)
		{
		h=h+1;
			if((n/10)==0)
		 	{
		 	    r1=r1;	
			 }
			 else if((n/10)!=0)
			 {
			 	r=r1;
			 }
		}
		n=n/10;
		
	}
	if((f==(h+1)) && (r>r1))
	{
		printf("%d %d",r,r1);
		printf("Number is in correct order");
	}
	else if((h==(f+1)) && (r<r1))
	{
	   	printf("%d %d",r,r1);
		printf("Number is in correct order");	
	}
	else if(f==h && ((r>r1)||(r<r1)))
	{
			printf("%d %d",r,r1);
		printf("Number is in correct order");
	}
	else
	{
		printf("Number is not in correct order");
	}
	printf("%d %d",f,h);
}
int main()
{
	int n;
	scanf("%d",&n);
	big_small(n);
}
