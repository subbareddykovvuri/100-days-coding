#include <stdio.h>
deci_bin(int n,int c)
{
	int d, r, binary = 0,rem,sum=0;
	 d = n;
   int temp = 1;
   while (n!=0) {
      r = n%2;
      n = n / 2;
      binary = binary + r*temp;
      temp = temp * 10;
   }
   printf("%ld \n", binary);
   while(binary)
   {
   	  rem=binary%10;
   	  
	  sum=sum+1;
	  binary=binary/10;
	  if (sum==c)
	  {
	  	break;
		 }   
   }
    printf("%d",rem);
    if(rem==1)
    {
    	printf("true");
	}
	else
	{
		printf("False");
	}
  
}
int main() {
   long n,c; 
   scanf("%d %d",&n,&c);
  deci_bin(n,c);
   return 0;
}
