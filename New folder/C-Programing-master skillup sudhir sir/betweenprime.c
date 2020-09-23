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
int reverse_num(int n)
{
	int r,rev=0;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
//	printf("rev is %d",rev);
	return rev;
}
void betw_prime(int n1,int n2)
{
	
	int i,s=0,rn,rn2,sn=0,k,total;
	for(i=n1;i<=n2;i++)
	{
		if(is_prime(i))
		{
			s=s+1;
		}
	}

	//printf("total primes between %d %d is %d",n1,n2,s);
  rn=reverse_num(n1);
  rn2=reverse_num(n2);
 // printf("%d  %d is reverse",rn,rn2);
  if(rn>rn2)
  {
  	rn=rn+rn2;  
    rn2=rn-rn2;    
    rn=rn-rn2; 
  }
  for(k=rn;k<=rn2;k++)
  {
  	if(is_prime(k))
		{
			sn=sn+1;
		}
  }
  total=s+sn;
  printf("s is %d sn is %d \n",s,sn);
  printf("Total primes are %d \n",total);
	
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	betw_prime(n1,n2);
}
