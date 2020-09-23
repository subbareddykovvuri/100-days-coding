#include<stdio.h>
int palindrom_number(int n,int rev)
{
	
	int r;
	   if(n>0)
	   {
	   	
		r=n%10;
		rev=rev*10+r;
	//	printf("%d",rev);
	    return palindrom_number(n=n/10,rev);
	   }
	  // printf("%d is rev",rev);
	   return rev;

	
}
int main()
{
	int n,rev=0,r1;
	int n1;
	scanf("%d",&n);
	n1=n;
	r1=palindrom_number(n,rev);
	//printf("%d rev",r1);
//	printf("%d n1",n1);
		if(n1==r1)
	{
		printf("Palindrome");
	}
	else{
		printf("Not palindrome");
	}
}
