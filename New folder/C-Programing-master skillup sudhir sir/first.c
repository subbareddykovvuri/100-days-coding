#include <stdio.h>
int main()
{
	int n,r1,r2,i,r3;
	scanf("%d%d%d",&n,&r1,&r2);
	//r1=5 r2=10 works normally
	//r1=10 r2=5 go to swapping
	//swapping condition
	if(r1>r2)
	{
		printf("Swapping is done\n");
		r3=r2;//5
		r2=r1;//10
		r1=r3;//5
	}
	for(i=r1;i<=r2;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
		
	
    return 0;
}

