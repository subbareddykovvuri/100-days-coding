#include<stdio.h>
int main()
{
      int n,i,r1,r2,r3;
      scanf("%d %d %d",&n,&r1,&r2); 
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
	return 0;
}
