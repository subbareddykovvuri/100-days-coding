#include<stdio.h>
void count_evod(int n){
	int r,g=0,h=0;
	while(n)
	{
		r=n%10;
		if(r%2==0)
		{
	      g=g*10+r;
		}
		else{
		h=h*10+r;
		}
		n=n/10;
	}
	printf("Even number is: %d\n",g);
	printf("Odd number is: %d",h);
}
int main(){
	int n;
	scanf("%d",&n);
	count_evod(n);
}
