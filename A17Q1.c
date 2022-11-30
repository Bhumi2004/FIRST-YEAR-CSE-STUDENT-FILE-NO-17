#include<stdio.h>
int main()
{
	  int n,i,j,sum=0,p=0;
	  for(i=1;i<=10;i++)
	  {
	  	printf("enter the number %d= ",i);
	  	scanf("%d",&n);  	
	  	for(j=2;j<n;j++)
	  	{
	  		if (n%j==0)
	  		{
	  			p++;
	  			break;
			  }
		  }
		  sum=sum+n;
		  if(p==0)
		  {
		  	sum=sum-n;
		  	break;
		  }
		  
	  	
	  }
	  printf("sum=%d",sum);
	  return 0;}
	  
	  
	  
	  
	  
	  

