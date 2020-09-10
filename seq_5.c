#include<stdio.h>
int fun(num,n,m){
	static int i=1,j=1;
	if(num%2==0)
	{
		if(i==num/2){
			return n;
		}
		n=next_prime(n);
		i++;
		return fun(num,n,m);
	}
	else{
		if(j==num/2+1){
			return m;
		}
		j++;
		return fun(num,n,m+2);
	}
}
int main(){
	
}
//2 2 4 3 6 5 8 7 10 11 12 13 14 17.....
//5->6
//
