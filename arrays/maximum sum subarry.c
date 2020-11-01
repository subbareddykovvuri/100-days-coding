/* maximum sum sub array

sub arrays{
1 2 3 4 5
1
2
3
4
5
1 2
1 2 3
1 2 3 4
1 2 3 4 5
2 3
2 3 4 
2 3 4 5 
3 4
3 4 5
4 5
}

2 3 -8 7 -1 2 3






*/
#include<stdio.h>
int max_subarray(int *arr,int n){
	int m=arr[0],i,j,c;
	for(i=0;i<n;i++){
		c=0;
		for(j=i;j<n;j++){
			c+=arr[j];
			m=max(c,m);	
		}
	}
}
int main(){
	
}




