#include<stdio.h>
int main()
{
	int n,e=0XAAAAAAAAAAAAAAAA,o=0x5555555555555555;
	scanf("%d",&n);
	e=n&e;
	o=n&o;
	e=e>>1;
	o=o<<1;
	printf("%d",e|o);
	
}

/*
n=200
n=1100 1000      

e=0000 0100 0100>>1
      or
o=0000 1000 0000<<1
-------------------
  0000 1100 0100
*/












