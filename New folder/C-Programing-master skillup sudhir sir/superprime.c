#include<stdio.h>
void super_prime(int n)
{
	int i,f=0,j,k,num,fg=0,numb,fgn=0,sp,numbe,number;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(f==0)
	{
		  num=n-1;
		while(num>=2 || numb>=2)
		{
		
	//	printf("prime");
   
    // printf("%d",num);
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
		numbe=num;
		//break;
	}			
	
     if(fg!=0)
		{
			num=num-1;
			fg=0;
			//printf(" when fg!=0 %d \n",num);
		}
   	
	numb=num-1;
	//	printf("num is %d \n",numb);
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
		//printf("prime number is %d \n",numb);
	//	break;
	}			
	
     if(fgn!=0)
		{
			numb=numb-1;
			number=numb;
			fgn=0;
			//printf(" when fg!=0 %d \n",num);
		}
   	
//	printf("%d %d %d ",n,num,numb);
     sp=num+numb+1;
     if(sp==n)
     {
     	printf("Super prime is %d",n);
     	break;
	 }
	 else
	 {
	 	numb=num;
	 	num=num-1;
	 }
	
	
}
 if(num<2 || numb<2 )
{
	printf("not super prime %d",n);
}

     
	}

	
	else
	{
		printf("not prime");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	super_prime(n);
}
