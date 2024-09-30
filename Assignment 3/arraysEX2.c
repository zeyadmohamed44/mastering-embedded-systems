#include <stdio.h>
int main ()
{
	float average , x = 0  ;
	int n , i ;
	printf("Enter the number of data:");
	fflush (stdout);
	scanf("%d", &n);
	float array1 [n-1];
	for(i=0 ; i<n ; i++)
	{
		printf("%d. Enter the number: ", i+1);
		fflush (stdout);
		scanf("%f", &array1[i]);
	}
	for (i=0 ; i<n ; i++)
	{
		x = x + array1[i];
	}
	average = x/n ;
	printf("the average is: %.2f", average);
}
