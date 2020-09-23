# include<stdio.h>
void hand_count(int n)
{
	int i,r,j=0,li=0,th=0;
	for(i=1;i<=n;i++)
	{
	  if(i<=5)
	  {
	  	j=j+1;
	  	li=1;
	  	th=1;
	  	 printf("i is %d j is %d \n",i,j);
	  }
	  else if(i>5)
	  {
	  	if(j<=5 && j!=0)
	  	{
	  		j=j-1;
	  		
	  		if(j==0)
	  		{
	  			th=0;
	  			li=1;
	  		    j=2;
	  		    printf("i is %d j is %d \n",i,j);
			  }
			  if(j==2 && li==1 && th==0)
			  {
			  	j=j+1;
			  	if(j<=4){
			  		printf("i is %d j is %d \n",i,j);
				  }
				  else if(j>4)
				  {
				  	j=j-1;
				  	printf("i is %d j is %d",i,j);
				  }
			  	
			  }
			  printf("i is %d j is %d \n",i,j);
			  
	  		
		  }
	  }
	  else{
	  	
	  }
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	hand_count(n);
}
