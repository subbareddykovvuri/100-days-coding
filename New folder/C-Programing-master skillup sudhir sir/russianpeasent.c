#include<stdio.h>
void russian_peasent(int n1,int n2)
{
	int half,dou,val,r=0,total,val1=0;
		if(n1%2!=0)
		{
			val1=n2;
		//	printf("%d \n",val1);
		}
	while(n1>=1 && n2>0)
	{
	    half=n1/2;
		dou=n2*2;
		n1=half;
		n2=dou;	
		if(n1==1)
		{
			val=n2;
			break;
		}
		else{
			if(n1%2!=0)
			{
				r=r+n2;
			}
			
			
		}
	
	}
	total=r+val+val1;
	printf("%d",total);
}
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	russian_peasent(n1,n2);
}
