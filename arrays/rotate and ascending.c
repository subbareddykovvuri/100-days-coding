#include<stdio.h>
int rotate(int *arr,int n){
	int i,a=arr[0],b=arr[1];
	int c=0;
	for(i=1;i<n;i++){
		if(a<b){
			if(arr[i-1]<=arr[i]){
				c++;	
			}
			else{
				break;
			}
		}
		else if(a==b){
			a=arr[i-1];
			b=arr[i];
			c++;
		}
		else{
			if(arr[i-1]>=arr[i]){
				c++;
			}
			else{
				break;
			}
		}
		
	}
	return c;
}
int fun(int *arr,int n){
	
	int c=0,i;
	c=rotate(arr,n);
	//printf("count=%d\n",c);
	if(c==0 || c==n-1){
		return 0;
	}
	
	int arr1[n],j=c;
	
	for(i=0;i<n;i++){
		if(i<(n-c-1)){
			arr1[i]=arr[j+1];
			j++;
			//printf("%d\n",i);
		}
		else{
			
			//printf("%d\n",j);
			arr1[i]=arr[i-(j-c)];
		}
	}
	/*for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}*/
	int c1=0;
	c1=rotate(arr1,n);
	//printf("count1 =%d\n",c1);
	if(c1==0 || c1==n-1){
		return 1;
	}
	else{
		return 0;
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(fun(arr,n)){
		printf("True");
	}
	else{
		printf("False");
	}
	
}
