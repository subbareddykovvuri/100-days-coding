#include<stdio.h>
void count_this(n)
{
	int r,g,f=0,h=0;
	r=n%10;
	g=r;
//	printf("%d",g);
	while(n)
	{
	    r=n%10;
	    if(g>=r){
	    f++;
	    g=r;
		}
		else if(g<=r)
		{
			g=r;
		h++;
		}
        n=n/10;
	
	}
	printf("%d %d",f,h);
	if(f!=0 && h==0){
		printf("Ascending");
	}
	else if(f==0 && h!=0){
		printf("Descending");
	}
	else
	{
		printf("Mixed");
	}
	
}
int main()
{

	int n;
	scanf("%d",&n);
	count_this(n);
}
