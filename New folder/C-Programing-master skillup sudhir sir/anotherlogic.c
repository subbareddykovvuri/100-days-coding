#include<stdio.h>
void count_this(n){
	int r,f;
	
		if(n%2==0)
		{
			f=1;
		
		}
		else{
			f=0;
			
		}
	while(n)
	{
		r=n%10;
		n=n/10;
		if(f==1 && r%2!=0){
		     f=2;
			break;
		}
		else if(f==0 && r%2==0 ){
		     f=2;
			break;
		}
		
	}
	if(f==1){
		printf("Even");
	}
	else if(f==0){
		printf("odd");
	}
	else{
		printf("mixed");
	}
	

}
int main(){

	int n;
	scanf("%d",&n);
	count_this(n);
}
