#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float f,r;
	scanf("%d",&n);
	f=sqrt(5)+1;
	r=n/(f/2);
	printf("%d",(int)round(r));
	return 0;
}
