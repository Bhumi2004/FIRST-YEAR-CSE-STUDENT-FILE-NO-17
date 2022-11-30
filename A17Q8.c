#include<stdio.h>
int main()
{
	int a,b,c,d,sum,i;
    for(i=1;i<=10;i++)
	{
		printf("\nenter the number=",sum);
		scanf("%d%d",&a,&b);
		sum=a+b;
		if(a<0)
		{
			scanf("%d",&c);
			sum=c+b;
			
		}
		if(b<0)
		{
			scanf("%d",&d);
			sum=d+a;
			
		}
		printf("\nyour sum=%d",sum);
		
		
		
		
		
	
	
	}
	return 0;
			

}
