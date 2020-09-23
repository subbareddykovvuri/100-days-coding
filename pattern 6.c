#include<stdio.h>
void pattern6(int n){
	int i,j,sp;
	for(i=1;i<=n;i++){
		for(sp=n;sp>i;sp--){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			if(j<i)
				printf("%d%d",i,i);
			else if(j==i){
				printf("%d",i);
			}	
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern6(n);
}
/*
    1
   222
  33333
 4444444
555555555
*/


