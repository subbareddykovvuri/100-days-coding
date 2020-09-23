#include<stdio.h>
int rot(int n,int d){
	unsigned int bc,A=n,B=n; 
	bc=(int)log2(n)+1;
	int f=bc-d;
	A=n<<64-f;
	A=A>>64-bc;
	B=n>>f;
	
	return A|B;
	
}
int main(){
	int n,d,a;
	scanf("%d%d",&n,&d);
	a=rot(n,d);
	printf("%d",a);
	return 0;
}
/*229 d=3 find bc=8

n=11100101<<3
n=00101


o/p:

n=00101111
47
*/
