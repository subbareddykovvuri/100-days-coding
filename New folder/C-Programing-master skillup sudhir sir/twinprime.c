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
int twin_prime(int n1,int n2)
{
	int v;
	if(is_prime(n1) && is_prime(n2) )
	{
	   if(n1<n2)
	   {
	   	n1=n1+n2;  
         n2=n1-n2;    
          n1=n1-n2; 
	   }
	   v=n1-n2;
	   if(v==2)
	   {
	   		return 1;
	   }
	   else{
	   	return 0;
	   }
	
	}
	else{
		return 0;
	}
}
int main()
{
	int n1,n2,res;
	scanf("%d%d",&n1,&n2);
	res=twin_prime(n1,n2);
	if(res==1)
	{
		printf("Twin prime");
	}
	else if(res==0)
	{
		printf("Not a twin prime");
	}
}

