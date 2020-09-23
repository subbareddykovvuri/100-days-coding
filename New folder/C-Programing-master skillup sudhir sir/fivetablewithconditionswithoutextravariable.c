#include<stdio.h>
int main()
{
      int n,i,r1,r2;
      scanf("%d %d %d",&n,&r1,&r2); 
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
     
	return 0;
}
