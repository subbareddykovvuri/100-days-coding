#include<stdio.h>
int find_lcm1(int l,int s){
    int t=1,l1;
    if(l<s)//12 26; 26 12
	{
    	l=l+s;//48
    	s=l-s;//48-26=12
    	l=l-s;//48-12=26
	}
	l1=1;
	while(1){
		if(l1%s==0){
			return l1;
		}
		l1=l*t++;
	}
}

int main()
{
    int a,b,res;
    scanf("%d%d",&a,&b);
    res=find_lcm1(a,b);    
    printf("%d",res);
    
    return 0;
}
