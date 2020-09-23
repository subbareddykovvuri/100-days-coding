#include<stdio.h>
int duck_number(int n)
{
	int r,c=0;
	    if(n==0)
	    {
	    	return;
		}
	    if(n%10==0)
	    {
	    	return 1;
		}
		return duck_number(n/10);
}
int main()
{
	int n,r;
	scanf("%d",&n);
  r = duck_number(n);
  if(r==1)
  {
  	printf("Duck number");
	 }   
	 else
	 {
	 	printf("Not a duck number");
	 }
}
