#include<stdio.h>
int rec_prime(int n,int i,int f)
{
	    
	
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
				return rec_prime(n,i+1,f);
		}
	

	
}
int main()
{
	int n,f=0,i=1;
	scanf("%d",&n);
    f=rec_prime(n,i,f);
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
