#include<stdio.h>
void even_odd_num(int num)//1234
{
	int r,even=0,odd=0;
	while(num)
	{
		r=num%10;//1
		num=num/10;//0
		if(r%2==0)
		{
			even=even*10+r;//42
		}
		else
		{
			odd=odd*10+r;//31
		}
	}
	printf("%d  %d",even,odd);
}
int main()
{
	int num;
	scanf("%d",&num);
	even_odd_num(num);//user defined funcall
	return 0;
}

/*
input:
1234
output:
42 31
*/



 // 3*10+5 --->35




