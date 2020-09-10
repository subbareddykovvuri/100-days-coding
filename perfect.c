#include<stdio.h>
#include<math.h>
int isperfect(num){
	int i,sum=0;
	for(i=2;i<=sqrt(num);i++){
		if(num%i==0)
			sum=sum+i+(num/i);
	}
	return sum==num-1;
}
int main(){
	int num;
	scanf("%d",&num);
	if(isperfect(num)){
		printf("perfect");
	}
	else{
		printf("Not perfect");
	}
}
/*
10-->1 2 5==8
6-->1 2 3==6
28-->1 2 4 7 14==28
*/
