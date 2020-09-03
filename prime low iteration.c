#include<stdio.h>
#include<math.h>
int isprime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
}
int main() {
	int n,res;
	scanf("%d",&n);
	//res=isprime(n);//printf("%d",isprime(n)); if(con);loop(con)
	if(isprime(n))//fun call with return
	{
		printf("%d is Prime",n);
	}
	else{
		printf("%d is not a prime",n);
	}
}

