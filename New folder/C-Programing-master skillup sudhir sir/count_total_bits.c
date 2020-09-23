#include<stdio.h>
#include<math.h>
int count(int n)
{
	return (int)log2(n)+1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",count(n));
}



