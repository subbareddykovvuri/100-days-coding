#include<stdio.h>
char* count_this(n){
	int r,ev=0,od=0,c=0;
	while(n)
	{
		r=n%10;
		if(r%2==0){
			ev++;
		}
		else{
			od++;
		}
		n=n/10;
	 c++;
	}
	  
	if(ev==c){
	    return "even";
	}
	else if(od==c){
		return "odd";
		
	}
	else{
		return "Mixed";
	}
//		printf("%d %d %d",ev,od,c);	
}
int main(){

	int n;
	scanf("%d",&n);
  char* type=count_this(n);
   printf("%s",type);
}
