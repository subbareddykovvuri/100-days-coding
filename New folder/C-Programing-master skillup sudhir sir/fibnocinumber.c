#include<stdio.h>
#include<math.h>
int fibi(int num)
{
	int n1,n2,mul,i,j;
	mul=num*5;
	n1=mul-4;
	n2=mul+4;
	for(i = 0; i <= n1; i++)
    {
        if(n1 == i*i)
        {
        return 1;
        }
    }
    	for(j = 0; i <= n2; i++)
    {
    	
        if(n1 == i*i)
        {
        	return 1;
        }
    }
    return 0;
}
int main()
{
	int num,f;
	scanf("%d",&num);
	f=fibi(num);
	if(f==1)
	{
		printf("fibnocci number");
	}

   else if(f==0)
    {
    	printf("Not a fibnocci number");
	}

	
}
