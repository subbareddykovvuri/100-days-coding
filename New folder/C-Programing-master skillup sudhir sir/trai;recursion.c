#include<stdio.h>
int rec_prime(int n,int f)
{
	int i=1 ,res;  
	
		if(n%i==0)
		{
				f=f+1;
			
		}
		if(i==n)
	    {
	    	//printf("%d %d %d \n",i,n,f);
	    	return f;
		}
		else{
			    res = rec_prime(i+1,f);
				return rec_prime(res,f);
		}
	

	
}
int main()
{
	int n,f=0;
	scanf("%d",&n);
    f=rec_prime(n,f);
   // printf("%d",f);
 	if(f==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
 
}
