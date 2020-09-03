#include <stdio.h>
int find_gcd(int a,int b){
	int temp;
	while(b){
		if(a>b){
			temp=a;
			a=b;
			b=temp;
		}
		b=b%a;
	}
	return a;
}
int main(){

	int a,b,res;
	scanf("%d%d",&a,&b);
	res=find_gcd(a,b);
	printf("%d",res);
	return 0;
}
/*
a	b
52	24	(small big)  swap
24	52
24 52%24

24	4
4	24
4	24%4
4	0

if b==0 stop then gcd is 4
*/
