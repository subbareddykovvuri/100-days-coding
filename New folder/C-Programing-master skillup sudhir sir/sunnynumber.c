#include<stdio.h>
#include<math.h>
double sunny_number(double n)
{
   return sqrt(n+1);
}
int main()
{
	int n;
	double r;
	scanf("%d",&n);
//	r=sunny_number(n);
	printf("%f",sunny_number(n));
	if(sunny_number(n)%1.00==0)
	{
		printf("Sunny number");
	}
	//printf("%d",r);
}
