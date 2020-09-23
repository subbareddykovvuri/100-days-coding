#include<stdio.h>
void zukarman_num(int n)
{
	int r,pro=1;
	while(n)
	{
		r=n%10;
		pro=pro*r;
		n=n/10;
		
	}
	printf("%d",pro);
	if(n%pro==0)
	{
		printf("Zukerman number");
	}
	else{
		printf("not zukerman number");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	zukarman_num(n);
}
