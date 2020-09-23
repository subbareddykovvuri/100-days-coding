#include<stdio.h>
void rotate_num(int n, int r)
{
	int i,d,f,c=1,rem,total,num,flag=0;
	num=n;
	while(n)
	{
		rem=n%10;
		n=n/10;
		c=c*10;
		//printf("%d %d %d",rem,n,c);
		
	}
	f=c/10;
   //	printf("%d",f);
  
   //	printf("Number is %d",num);
   	//printf("working");
   	while(num)
   	{
   		flag=flag+1;
   	   //	printf(" flag is %d \n",flag);
   		if (flag>r)
   		{
   			break;
		   }
		   else{
		d=num%10;
   		num=num/10;
	   total=((f*d)+num);
	   num=total;
	  printf("%d \n",total);
		   	
		   }
   	 }
//     printf("%d \n",total);
 }
int main()
{
	int n,r;
	printf("Enter number");
	scanf("%d",&n);
	printf("Enter number of rotations");
	scanf("%d",&r);
	rotate_num(n,r);
}
