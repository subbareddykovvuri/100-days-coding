#include<stdio.h>
void prime(int n)
{
	int i,f=0,num,fg=0,j,fgn=0,numb,k,pretotal,aftotal;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f++;
		//	printf("not prime");
		}
	}
	//printf("%d",f);
	if(f==0)
	{
		printf("prime");
	}
	if(f!=0)
	{
     num=n-1;
    // printf("%d",num);
	while(num>0)
	{
		//printf("num is %d \n",num);
		for(j=2;j<=num/2;j++)
    	{
		if(num%j==0)
		{
			fg++;
		//	printf(" number is %d  and count is %d\n",num,fg);
		}

			//printf("num is %d and fg is %d",num,fg);
	}
	 if(fg==0)
	{
	//	printf("prime number is %d \n",num);
		break;
	}			
	
     if(fg!=0)
		{
			num=num-1;
			fg=0;
			//printf(" when fg!=0 %d \n",num);
		}
   	
	}


}
if(f!=0)
{
	numb=n+1;
		while(numb>0)
	{
		//printf("num is %d \n",num);
		for(k=2;k<=numb/2;k++)
    	{
		if(numb%k==0)
		{
			fgn++;
		//	printf(" number is %d  and count is %d\n",num,fg);
		}

			//printf("num is %d and fg is %d",num,fg);
	}
	 if(fgn==0)
	{
	//	printf("prime number is %d \n",numb);
		break;
	}			
	
     if(fgn!=0)
		{
			numb=numb+1;
			fgn=0;
			//printf(" when fg!=0 %d \n",num);
		}
   	
	}
}
pretotal=n-num;
aftotal=numb-n;
//printf("difference between nun and pre num is %d \n",pretotal);
//printf("difference between nun and next num is %d \n",aftotal);
if(pretotal>aftotal)
{
	printf("Nearest prime is %d \n",numb);
}
else if(pretotal<aftotal)
{
	printf("Nearest prime is %d \n",num);
}
else if(pretotal==aftotal)
{
	printf("Nearest prime is %d %d\n",num,numb);
}
}
int main()
{
	int n;
	scanf("%d",&n);
	prime(n);
}
