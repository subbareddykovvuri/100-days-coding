#include<stdio.h>
int main()
{
	int n,r,n1,dc=0;//
	scanf("%d",&n);//1234
	n1=n;//copy of a number
	while(n)
	{
		r=n%10;//4      3   2   1
		n=n/10;// 123  12   1   0	
		dc++;
	}	
	printf("%d ",dc);
	return 0;
}

/*
sample input:
1234
sample output:

*/

/*
n=1234
r=n%10-->4
n=n/10-->123

r=n%10-->3
n=n/10-->12

r=n%10---> 2
n=n/10---> 1

r=n%10--->1
n=n/10--->0
*/










