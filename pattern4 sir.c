void pattern4_sir(int n){
	int i,j,k=1;
	for(i=1;i<=n;i++,k+=2){
		
		for(j=1;j<=n;j++){
			printf("*");		
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern4_sir(n);
}
/*
n=5
*
***
*****
*******
*********

*/
