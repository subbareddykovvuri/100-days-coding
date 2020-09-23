void pattern4(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<i)
				printf("**");
			else if(j==i){
				printf("*");
			}	
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern4(n);
}
/*
n=5
*
***
*****
*******
*********

*/
