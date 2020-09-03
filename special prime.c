#include<stdio.h>
int isprime(int num){
	int i,fc=0;
	if(num==1){
		return 0;
	}
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			fc=1;	
			return 0;
			break;
		}
	}
	
	if(fc==0){
		
		return 1;
	}
}
int main(){
	int num,res;
	scanf("%d",&num);
	res=isprime(num);
	if(res==0){
		printf("%d not a  prime",num);
		return 0;
	}
	else{
		int i=1,a,b;
		
		
		while(isprime(num-i)!=1){
			i++;	
		}
		a=num-i;
		i=1;
		while(isprime(a-i)!=1){
			i++;	
		}
		b=a-i;	
		if(a<=1 || b<=1){
			printf("%d is not a special numberr ",num);
			return 0;
		}
		while(a+b+1!=num){
			a=b;
			i=1;
			while(isprime(a-i)!=1){
				i++;	
			}
			b=a-i;
			if(a<=1 || b<=1){
				printf("%d is not a special numberr ",num);
				break;
			}
		}
		if(a+b+1==num){
			printf("%d is an special number",num);
		}
		
	}
	return 0;
}

























/*
n=19 
a=17 b=13
a+b+1=19
false

a=13 b=11
a+b+1=19
false

a=7 b=11
a+b+1=19
true

n=7
a=3 b=5
a+b+1=7
false

a=2 b=3
a+b+1=7
false
*/
