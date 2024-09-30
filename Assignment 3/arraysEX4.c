#include <stdio.h>
int main ()
{
	int n , i  , location ;
	printf("Enter no of elements: ");
	fflush (stdout);
	scanf("%d", &n );
	int array1[n] , inserted;
	for (i=0 ; i<n ; i++)
	{
		scanf("%d", &array1[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush (stdout);
	scanf("%d", &inserted);
	printf("Enter the location: ");
	fflush (stdout);
	scanf("%d", &location);
	for (i=n; i>=location ; i--)
	{
		array1[i]=array1[i-1];
	}
	array1[location-1]= inserted ;
	for (i=0 ; i<(n+1) ; i++)
	{
		printf("%d ", array1[i]);
	}
}
