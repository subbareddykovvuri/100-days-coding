#include<stdio.h>
#include"arrays.h"
int main()
{
	int size,arr[100],i,primes[100];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	display_primes(arr,&size,primes);//5---> 3
	for(i=0;i<size;i++)
	{
		printf("%d ",primes[i]);
	}
	//printf("\n%d",size);
	return 0;
}

/*
sample input:
5
1 2 3 4 5

2 3 5

sample output:

*/
