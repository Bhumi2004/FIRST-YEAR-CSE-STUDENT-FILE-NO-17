#include<stdio.h>
int main()
{
	int a,b,i,sum;
	for(i=1;i<=100;i++)
	{
		printf("\nenter the two number=");
		scanf("%d%d",&a,&b);
		sum=a+b;
		if(a<0)
		{
			break;
		}
		if(b<0)
		{
			break;
		}
		printf("your sum = %d",sum);
	}
	return 0;
}
