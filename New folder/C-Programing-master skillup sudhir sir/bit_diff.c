#include<stdio.h>
int bit_diff(int n,int m)
{
	int pos=1;
	n=n^m;
	while(n>0)
	{
		if((n&1)==0)
			return pos;
		n=n>>1;
		pos++;
	}
	return pos;
}
int main()
{
	int pos,n,m;
	scanf("%d%d",&n,&m);
	pos=bit_diff(n,m);
	printf("%d",pos);
}
/*


*/
