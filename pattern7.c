#include<stdio.h>
void pattern7(int n){
	int i,j,k=1,sp;
	for(i=1;i<=n;i++,k=k+2){
		for(sp=n;sp>i;sp--){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			if(j<i)
				printf("%d%d",k,k);
			else if(j==i){
				printf("%d",k);
			}	
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern7(n);
}
/*
    1
   333
  55555
 7777777
999999999
*/
