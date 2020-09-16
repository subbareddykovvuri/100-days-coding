#include<stdio.h>
int power_of_2(n){
	return (n&(n-1))==0;//1
}
int main(){
	int n,c;
	scanf("%d",&n);
	c=power_of_2(n);
	if(c){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
/*n=4
n=6
*/
