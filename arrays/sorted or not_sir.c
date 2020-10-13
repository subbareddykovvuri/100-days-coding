//1<n<=10 3 65535
/*#include<stdio.h>
typedef long long int LLI;
int main()
{
	LLI n,i;
	scanf("%lld",&n);
	LLI arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
}*/

#include<stdio.h>
int isasc(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			return 0;
		}
	}
	return 1;
}
//1 10 3 4 5
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(isasc(arr,n))
	{
		printf("True");
	}
	else
	{
		printf("False")
	}
}
