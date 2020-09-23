#include<stdio.h>
void number_exist(int n,int d){
	int r,f=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r==d){
		printf("Number exist");
		f=1;
		
		break;
		}
	}
	if(f==0)
	{
		printf("number not exist");
	}
}
int main(){
	int n,d;
	scanf("%d %d",&n,&d);
	number_exist(n,d);
}
