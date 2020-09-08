#include<stdio.h>
int factor_sum(int n){
	int i,sum=0;
	for (i = 1; i <n;i++) {
        if (n % i == 0) {
            sum=sum+i;
            
        }
    }
    return sum;
}
void seq_3(int n){
	if(factor_sum(n)!=n){
		printf("%d ",n);	
		return(seq_3(factor_sum(n)));
	}
}
int main(){
	int n;
	scanf("%d",&n);
	seq_3(n);
	return;
}
/*
n=10
10 8 7 1

n=12
12 
1 +2 +3 +4 +6=16
12 16
1 2 4 8=15
12 16 15
1 3 5=9
12 16 15 9
1 3=4
12 16 15 9 4
1 2=3
1=1
12 16 15 9 4 3 1
1 =1
stop
*/

