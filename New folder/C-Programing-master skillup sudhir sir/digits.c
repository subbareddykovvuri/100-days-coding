#include<stdio.h>
int main(){
   int n,r,t,i=0,j=0;
   scanf("%d",&n);
   t=n;
   while(n!=0){
   	r=n%10;
   	if(r%2==0){
   		j=j+1;
	   }
	   else{
	   i=i+1;
	   }
   	n=n/10;
   
   	printf("%d",r);
   	
   }
   printf("\n %d",i);
    printf("\n %d\n",j);
    if(i>j){
    	printf("Even numbers are more");
	}
	else if(i==j){
		printf("Even and odd are equal");
	}
	else{
		printf("Odd numbers are more");
	}
	return 0;
}
