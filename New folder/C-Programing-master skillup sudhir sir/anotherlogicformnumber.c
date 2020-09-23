int form_number(int n,int type)
{
	int r,fn=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(type==1 && r%2==0)
		{
			fn=fn*10+r;
		}
		else if(type==0 && r%2==1)
		{
			fn=fn*10+r;
		}
	}
	return fn;
}
int main()
{
	int n,even,odd;
	scanf("%d",&n);
	even = form_number(n,1);
	odd=form_number(n,0);
	printf("Even number is: %d\n",even);
	printf("Odd number is: %d",odd);
}
