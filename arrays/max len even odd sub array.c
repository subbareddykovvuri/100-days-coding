/*max len even odd sub array
10 12 8 4
1

7 10 13 14
4


*/

#include<stdio.h>

int fun(int *arr,int n){
	int i,l=1,res=1;
	for(i=0;i<n-1;i++){
		if(arr[i]%2==0 && arr[i+1]%2!=0){
			l++;
			res=max(l,res);
		}
		else if(arr[i]%2!=0 && arr[i+1]%2==0){
			l++;
			res=max(l,res);
		}
		else{
			
			l=1;	
		}
		printf("%d  %d  %d\n",arr[i],arr[i+1],l);	
	}
	
	return res;
}
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("length=%d",fun(arr,n));
}



