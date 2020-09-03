#include <stdio.h>
int find_gcd(int a,int b){
	int t=2,res=1;
	while(a>=t && b>=t){
		if(a%t==0 && b%t==0){
			res=res*t;
			a=a/t;
			b=b/t;
		}
		else{
			t++;
		}
	}
	return res;
	
}

int main(){
	int a,b,gcd;
	scanf("%d%d",&a,&b);
	gcd=find_gcd(a,b);
	printf("%d",gcd);
	return 0;
	
}
