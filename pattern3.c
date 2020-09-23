#include<stdio.h>
void pattern3(int n){
	int i,j,k,sp=0;
	for(i=1;i<=n;i++){
		for(sp=1;sp<i;sp++){
			printf(" ");
		}
		for(j=n;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
}
/*void pattern3(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>=i)
				printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}*/
int main(){
	int n;
	scanf("%d",&n);
	pattern3(n);
}
