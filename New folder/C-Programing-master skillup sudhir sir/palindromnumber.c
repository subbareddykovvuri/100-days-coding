#include<stdio.h>
void palindrom_number(int n)
{
	int n1=n;
	int r,rev=0;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	//printf("%d   %d",rev,n1);
	if(n1==rev)
	{
		printf("Palindrome");
	}
	else{
		printf("Not palindrome");
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	palindrom_number(n);
}
