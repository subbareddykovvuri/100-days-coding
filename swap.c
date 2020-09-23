#include<stdio.h>
int swap_b(int n){
	int e=2863311530,o=1431655765;
	//or int e=0xAAAAAAAAAAAAAAAA,o=0x5555555555555555;
	e=n&e;
	o=n&o;
	e=e>>1;
	o=o<<1;	
	return e|o ;
}
int main(){
	int n,s;
	scanf("%d",&n);
	s=swap_b(n);
	printf("%d ",s);
	return 0;
	
}
/*
n=20
    1 0 1 0 0
0000 0000 0000 0000 0000 0000 0001 0100
0000 0000 0000 0000 0000 0000 0010 1000

n=251
0000 1111 1011

e=0000 1010 1010
o=0000 0101 0001
*/
