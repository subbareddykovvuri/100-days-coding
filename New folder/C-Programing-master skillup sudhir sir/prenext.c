#include<stdio.h>
#include<math.h>
int find_fibilocation(num)
{
	int n,f,d;
	f=sqrt(5)+1;
	n=(f/2)*num;
	printf("%d",n);
	

}
int main()
{
	int res,num;
	scanf("%d",&num);
	res=find_fibilocation(num);
//	printf("%d",res)
}
//((1+sqrt(5))^n-(1-sqrt(5))^n)/a^n*sqrt(5)
