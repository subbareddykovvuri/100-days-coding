#include<stdio.h>
void five_table(int n,int o)
{
	int i;
    for(i=1;i<=o;i++)
	  {
      	printf("%d X %d = %d\n",n,i,n*i);
	  }	
}
int main()
{
       int n,o;
       scanf("%d %d",&n,&o);
      five_table(n,o);
}
