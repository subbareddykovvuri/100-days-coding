#include<stdio.h>
int digi_sum(int n){
	int sum=0,r,count=0;
	while(n!=0){
		r=n%10;
		sum+=r;
		n=n/10;
		count+=1;
	}
	if(count!=1){
		return digi_sum(sum);
	}
	else{
		return sum;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",digi_sum(n));
	return 0;
}
