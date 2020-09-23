#include<stdio.h>
void hand_sum(int num)
{
int i,n=5,l=1,t=1,j,k;
for(i=1;i<=num;i++)
{
//	printf("%d\n",i);
if(i==num)
{
	printf("%d %d",i,num);
}
if(i<=n)
{
	l=1;
	t=1;
//	printf(" i is %d l is %d t is %d \n",i,l,t);
}
if(i==n)
{
	printf("%d %d",i,n);
	n=4;
	t=0;
	printf(" when i==n %d %d %d %d \n",i,n,t,l);
}
for(j=n;j>=1;j--)
{
	if(t==0)
	{
		t=0;
		l=1;
	}
//	if(i==num && t==0)
//	{
//		printf("forward direction is %d \n",j);
//		break;
//	}

}
for(k=2;k<n;k++)
{
	if(j==n)
	{
		t=1;
		l=0;
	}
	if(t!=0)
	{
		t=1;
		l=0;
		j=j+1;
	}
//		if(i==num && t!=0)
//	{
//		printf("backward direction is %d \n",k);
//		break;
//	}
}
if(i==num)
{
	//printf("%d %d %d",i,l,t);
//	break;
}
}
if(i==num)
{
	if(l==1 && t==0)
{
	printf("Forward direction %d",j);
}
else if(l==0 && t==1)
{
	printf("Backward direction %d",k);
}
}


}
int main()
{
	int num;
	scanf("%d",&num);
	hand_sum(num);
}
