#include<stdio.h>
#include<math.h>
int rotate(unsigned int n,unsigned int d)
{
	unsigned int A,B,bc;
	bc=(int)log2(n)+1;//8-3
	int f=bc-d;//8-3
	A=n<<64-f;
	A=A>>64-f;
	A=A<<d;
	B=n>>f;
	return A|B;
}
int main()
{
	unsigned int n,d;
	scanf("%u%u",&n,&d);
	n=rotate(n,d);
	printf("%d",n);
}

/*
n=229 d=3 find bc=8

A=00000000 00000000 00000000  11100101<<
A=00101000 00000000 00000000  0000000
A=00000000 00000000 00000000  0000101==>5
A=00000000 00000000 00000000  0101000==>5

B=00000000000000 00000000 00000000  111>>5
*/


