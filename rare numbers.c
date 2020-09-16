#include<stdio.h>
#include<math.h>
int reverse(int n){
	int n2,r;
	while(n>0){
		r=n%10;
		n2=n2*10+r;
		n=n/10;
	}
	return n2;	
}


int is_perfect_sq(int n){
	float a=sqrt(n);
	if(a*a==n){	
		return 1;		
	}
	return 0;
		
}


int rare(int n1){
	int n2,t;
	n2=reverse(n1);
	if(n1<n2){
		t=n1;
		n1=n2;
		n2=t;
	}
	if(is_perfect_sq(n1-n2)==1 && is_perfect_sq(n1+n2)==1){
		return 1;
	}
	return 0;
	
}
int main(){
	int n;
	scanf("%d",&n);
	if(rare(n)==1){
		printf("%d is a rare number",n);
	}
	else{
		printf("%d is not a rare number",n);
	}
	return 0;
}
