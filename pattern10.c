#include<stdio.h>
void pattern10(int n){
	int i,j,k=1,v,u,sp;
	for(i=0;i<n;i++,k+=2){
		for(sp=n-1;sp>i;sp--){
			printf(" ");
		}
		v=i;
		u=1;
		for(j=1;j<=k;j++){
			if(v<0){
				printf("%d",u++);
			}
			else{
				printf("%d",v--);
			}
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern10(n);
}
/*
	0
   101
  21012
 3210123
432101234
*/
