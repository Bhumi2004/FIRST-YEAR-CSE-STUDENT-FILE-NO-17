#include<stdio.h>
int main()
{
	int i,n;
	for(i=1;i<=1000;i++)
	{
		printf("\nenter the number=");
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		if(n*10)
		{
			continue;
			
		}
	}
	return 0;
	
}
