#include<stdio.h>
int find_lcm(int a,int b){
    int c,d,i=2;
    c=a;
    while(c%b!=0){  
        c=a*i;
        i++;   
    }
    return c;
}

int main()
{
    int a,b,res;
    scanf("%d%d",&a,&b);
    res=find_lcm(a,b);    
    printf("%d",res);
    
    return 0;
}
