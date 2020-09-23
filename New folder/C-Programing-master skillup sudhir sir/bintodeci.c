#include<stdio.h>
#include<math.h>
int bin_dec(int n)
{
	int d = 0, i = 0, r;
    while (n != 0) {
        r= n % 10;
        n = n/10;
        d = d+r * pow(2, i);
        i++;
    }
    return d;
}
int main()
{
	int n,d;
	scanf("%d",&n);
   d=bin_dec(n);
   printf("%d",d);
}
