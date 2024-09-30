#include <stdio.h>
int main ()
{
	int R , C , i , x;
	printf("Enter rows and columns of matrix: ");
	fflush (stdout);
	scanf("%d %d", &R , &C);
	float matrix1[R][C];
	for (i = 0 ; i<R ; i++)
		{
			for (x = 0 ; x<C ; x++)
			{
				printf("Enter element a%d%d:", i+1 , x+1);
				fflush (stdout);
				scanf("%f",&matrix1[i][x]);
			}
		}
	printf("Entered matrix: \n");
		for (i = 0 ; i<R ; i++)
			{
				for (x = 0 ; x<C ; x++)
				{
					printf("%.2f ",matrix1[i][x]);
				}
				printf(" \n");
			}
	float matrix2 [C][R];
	for (i = 0 ; i<C ; i++)
	{
		for (x = 0 ; x<R ; x++)
		{
			matrix2 [i][x] = matrix1 [x][i];
		}
	}
	printf("transpose of matrix: \n");
		for (i = 0 ; i<C ; i++)
			{
				for (x = 0 ; x<R ; x++)
				{
					printf("%.2f ",matrix2[i][x]);
				}
				printf(" \n");
			}
}
