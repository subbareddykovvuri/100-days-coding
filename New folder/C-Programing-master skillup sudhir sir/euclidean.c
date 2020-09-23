#include<stdio.h>
int euclidean_gcd(int n1,int n2)
{
	int temp;
	while(n2)
	{
		if(n1>n2)
		{
		 temp=n1;
		 n1=n2;
		 n2=temp;
		}
		 n2=n2%n1;
	}
	return n1;
}
int main()
{
	int n1,n2,gcd;
	scanf("%d%d",&n1,&n2);
	gcd=euclidean_gcd(n1,n2);
    printf("gcd is %d",gcd);
}
