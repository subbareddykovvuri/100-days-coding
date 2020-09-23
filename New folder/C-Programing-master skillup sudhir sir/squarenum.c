#include<stdio.h>
# include<math.h>
void square_num(int n)
{
	
		if(n==1)
		{
			printf("%d \n",n);
			return;
		}
		else if(n%2==0)
		{
				printf("%d \n",n);
			return square_num(sqrt(n));
		
		}
		else 
		{
			printf("%d \n",  n);
			return square_num(((sqrt(n))*(sqrt(n))*sqrt(n)));
			
		}

}
int main()
{
	int n;
	scanf("%d",&n);
	square_num(n);
}
