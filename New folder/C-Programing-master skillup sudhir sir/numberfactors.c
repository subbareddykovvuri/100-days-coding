#include<stdio.h>
int is_prime(int n)
{
	int j;
	for(j=2;j<=n/2;j++)
			{
				if(n%j==0)
				{
					//fi++;
					//printf("%d is not prime \n",n);
					return 0;
				}
				
			}
			return 1;
}
void fa_num(int n)
{
	int sum=0,i;
   if(is_prime(n))	
   {
   	printf("prime number");
   }
   else
   {
   	     
         while(n)
         {
         	 int sum=0;
         	if(n==1)
         	{
         		break;
			 }
         	 for(i=1;i<=n/2;i++)
   	{
   		if(n%i==0)
   		{
   			sum=sum+i;
   		//	printf("%d",i);
		   }
	   }
	   if(sum==n)
	   {
	   	printf("%d",sum);
	   	break;
	   }
	  // printf("%d \n",sum);
	   n=sum;
	   printf("%d \n",n);
		 }
   	  
	   	
   	
   }
}
int main()
{
	int n;
	scanf("%d",&n);
	fa_num(n);
}
