#include<stdio.h>
int main()
{
      int n,i,o;
      scanf("%d %d",&n,&o);
      for(i=1;i<=o;i++){
      	printf("%d X %d = %d\n",n,i,n*i);
	  }
	return 0;
}
