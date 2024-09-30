#include <stdio.h>

int factorial(int x)
{
	if (x==0)
		{
			return 1 ;
		}
	else
	{
		int result = x*factorial(x-1) ;
		return result;
	}
}
int main()
{
	int y ;

	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&y);
	if(y<0)
	{
		printf("undefined");
	}
	else
	{
		printf("Factorial of %d = %d", y , factorial(y));
	}
}
