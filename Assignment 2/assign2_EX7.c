#include<stdio.h>
int main()
{
	int x , i , result=1 ;
	printf("Enter an integer:");
	fflush (stdout);
	scanf("%d",&x);
	if(x<0)
	{
		printf("Error factorial of negative number doesn't exist");
	}
	else
	{
		for (i=1;i<=x;++i)
		{
			result = result * i;
		}
		printf("factorial %d = %d",x,result);
	}
}
