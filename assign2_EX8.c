#include <stdio.h>
int main()
{
	float a , b , result ;
	char operator;
	printf("Enter operator either + or - or * or /");
	fflush (stdout);
	scanf("%c",&operator);
	switch (operator)
	{
	case ('+'):
	{
		printf("Enter two operands:");
		fflush (stdout);
		scanf("%f %f",&a , &b);
		result= a+b;
		printf("%f + %f = %f", a, b, result);
	}
	break;
	case ('-'):
		{
			printf("Enter two operands:");
			fflush (stdout);
			scanf("%f %f",&a , &b);
			result= a-b;
			printf("%f - %f = %f", a, b, result);
		}
	break;
	case ('*'):
		{
			printf("Enter two operands:");
			fflush (stdout);
			scanf("%f %f",&a , &b);
			result= a*b;
			printf("%f * %f = %f", a, b, result);
		}
	break;
	case ('/'):
		{
			printf("Enter two operands:");
			fflush (stdout);
			scanf("%f %f",&a , &b);
			result= a/b;
			printf("%f / %f = %f", a, b, result);
		}
	break;
	default:
	{
		printf("wrong choice");
	}
	break;
	}

}
