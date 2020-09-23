#include<stdio.h>
int sum=0,r,count=0,temp=0;
int Counting(int n){
	if(n==0){
		return count;
	}
	r=n%10;
	count++;
	n=n/10;
	return Counting(n);
}
int digitalRoot(int n){
	
	if(n==0){
		return sum;
	}
	sum+=n%10;
	n=n/10;
	if(n==0 && Counting(sum)==1){
		return sum;
	}else if(n==0 && Counting(sum)!=1){
		temp=sum;
		sum=0;
		count=0;
		return digitalRoot(temp);
	}
	return digitalRoot(n);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",digitalRoot(n));
//	printf("%d",Counting(n));
	return 0;
}
