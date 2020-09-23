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
void next_prime(int n1,int n2)
{

	int s=0,res,num;
		num=n1;
	while(s!=n2)
	{
		//printf("%d is s \n",s);
		if(is_prime(n1))
		{
			s=s+1;
		//	printf("s is %d and n1 is %d \n",s,n1);
			n1=n1+1;
		}
		else
		{
		//	printf("%d is not prime \n",n1);
			n1=n1+1;
		//	printf("it is incremented to %d \n",n1);
			
			res=is_prime(n1);
		//	printf("Result is %d \n",n1);
		}
		if(s==n2)
		{
			printf("%d  prime number after %d is %d",n2,num,(n1-1));
			break;
		}
	}
	//printf("s is %d ",s);
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	next_prime(n1,n2);
}
