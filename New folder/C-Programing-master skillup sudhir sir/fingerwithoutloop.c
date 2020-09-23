#include<stdio.h>
void number(int n)
{
      int r;
      r=n%8;
     

      if(r==1)
      {
      	printf("It is thumb finger from forward direction");
	  }
	  else if(r==0)
	  {
	  	printf("it is point finger from backward direction ");
	  }
	  else if(r==2)
	  {
	  	printf("It is point finger from forward direction");
	  }
	  else if(r==3)
	  {
	  	printf("It is middle finger from forward direction");
	  }
	  else if(r==4)
	  {
	  	printf("It is ring finger from forward direction");
	  }
	  else if(r==5)
	  {
	  	printf("It is little finger from forward direction");
	  }
	  else if(r==6)
	  {
	  	printf("it is little finger from backward direction");
	  }
	  else if(r==7)
	  {
	  	printf("it is middle finger from backward direction");
	  }
}
int main()
{
	int n;
	scanf("%d",&n);
	number(n);
}
