#include <stdio.h>
int main ()
{
	float matrix1 [2][2] , matrix2 [2][2] , sum[2][2];
	int i  , x ;
	printf("Enter the elements of 1st matrix:\n");
	for (i = 0 ; i<=1 ; i++)
	{
		for (x = 0 ; x<=1 ; x++)
		{
			printf("Enter element a%d%d:", i+1 , x+1);
			fflush (stdout); fflush (stdin);
			scanf("%f",&matrix1[i][x]);
		}
	}
	printf("Enter the elements of 2nd matrix:\n");
	for (i = 0 ; i<=1 ; i++)
	{
		for (x = 0 ; x<=1 ; x++)
		{
			printf("Enter element b%d%d:", i+1 , x+1);
			fflush (stdout); fflush (stdin);
			scanf("%f",&matrix2[i][x]);
		}
	}

	for (i = 0 ;i<=1 ; i++)
	{
		for (x = 0 ; x<=1 ; x++)
		{
			sum[i][x] = matrix1[i][x] + matrix2[i][x] ;
		}
	}
	printf("The sum equal:\n");
	for (i=0 ; i<=1 ; i++)
	{
		for (x = 0 ; x<=1 ; x++)
		{
			printf("%.3f ",sum[i][x]);
		}
		printf(" \n");
	}

}
