#include<stdio.h>
#include<math.h>
void pronic_number(int n)
{
	int i,p;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
		//	printf("%d",i);
			p=i*(i+1);
			if(p==n)
			{
				printf("pronic number");
				break;
			}
		}
	}
	if(p!=n)
	{
		printf("not pronic number");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pronic_number(n);
}
