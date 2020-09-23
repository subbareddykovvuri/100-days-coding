#include<stdio.h>
int loop(int n)
{
	int remainder,rev;
		while(n)
	{
	
	        //return n-1;
			printf("%d",n--);
		//	if(n==0 || n>=0)
			//{
			//	 remainder = n % 10;
                //  rev = rev * 10 + remainder;
                //    n /= 10;
                    
		//	}
			
	}
//	printf("%d",rev);
	return n;
}
void num_revnum(int n)
{
	int i=1,n1,num;
	n1==n;
    num=loop(n);
    printf("%d",num);
    if(num==0)
    {
    	loop(n);
	}
    
//
	
    
}
int main()
{
	int n;
	scanf("%d",&n);
	num_revnum(n);
}
