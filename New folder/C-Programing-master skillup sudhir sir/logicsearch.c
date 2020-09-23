#include<stdio.h>
int number_exist(int n,int d){
	int r,f=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r==d){
		return 1;
		}
	}
	return 0;
}
int main(){
	int n,d,search;
	scanf("%d %d",&n,&d);
  search=number_exist(n,d);
  if(search==1){
  	printf("true");
  }
  if(search==0)
  {
  	printf("false");
  }
}
