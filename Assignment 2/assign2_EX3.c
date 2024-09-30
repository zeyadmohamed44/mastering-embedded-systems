#include <stdio.h>
int main ()
{
	float a , b , c ;
	printf("enter three numbers:");
	fflush (stdout);
	scanf("%f %f %f",&a,&b,&c);
	if (a>b)
	{
		if (b>c)
		{
			printf("largest number: %f",a);
		}
		else
		{
			if (a>c)
			{
				printf("largest number: %f",a);
			}
			else
			{
				printf("largest number: %f",c);
			}
		}

	}
	else
	{
		if (b>c)
		{
			printf("largest number: %f",b);
		}
		else
		{
			printf("largest number: %f",c);
		}

}
}
