#include<stdio.h>
int lcm_num(int n1,int n2)
{
	int t=2,res=1;
	while(n1>=t && n2>=t)
	{
		//if(n1<t || n2<t)
		//{
			//break;//manual breaking
		//}
		if(n1%t==0 && n2%t==0)
		{
			res=res*t;
			n1=n1/t;
			n2=n2/t;
			
		}
		else 
		{
			t++;
		}
	}
	return res*n1*n2;
}
int main()
{
	int n1,n2,lcm;
	scanf("%d%d",&n1,&n2);
	lcm=lcm_num(n1,n2);
	printf("lcm is %d",lcm);
	
}
