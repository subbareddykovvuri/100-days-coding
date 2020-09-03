#include <stdio.h>
int find_lcm(int a,int b){
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
	return res*a*b;
	
}

int main(){
	int a,b,lcm;
	scanf("%d%d",&a,&b);
	lcm=find_lcm(a,b);
	printf("%d",lcm);
	return 0;
	
}
//different methods try
