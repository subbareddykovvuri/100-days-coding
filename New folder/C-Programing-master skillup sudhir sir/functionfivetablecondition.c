#include<stdio.h>
void five_table_condition(int n,int r1,int r2)
   {
   	 int r3,i;
      if(r1>r2){
      	r3=r2;
      	r2=r1;
	  }
	  else{
	  	r3=r1;
	  	r2=r2;
	  }
      for(i=r3;i<=r2;i++)
	  {
      	printf("%d X %d = %d\n",n,i,n*i);
	  }	
   }
int main()
{
      int n,i,r1,r2;
      scanf("%d %d %d",&n,&r1,&r2); 
      five_table_condition(n,r1,r2);
}
