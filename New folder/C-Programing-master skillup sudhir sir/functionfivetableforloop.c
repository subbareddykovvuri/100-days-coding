#include<stdio.h>
void five_table_forloops(int n,int r1,int r2)
{
	int i;
	if(r1>r2){
       for(i=r2;i<=r1;i++)
	  {
      	printf("%d X %d = %d\n",n,i,n*i);
	  }
	  }
	  else{
	  	 for(i=r1;i<=r2;i++)
	  {
      	printf("%d X %d = %d\n",n,i,n*i);
	  }
	  }
}
int main()
{
      int n,i,r1,r2;
      scanf("%d %d %d",&n,&r1,&r2); 
      five_table_forloops(n,r1,r2);
}
