#include <stdio.h>
int main ()
{
	int n , i ;
	float x ;
	printf("Enter no of elements");
	fflush (stdout);
	scanf("%d",&n);
	float array [n-1];
	printf("Enter the numbers");
	for (i=0 ; i<n ; i++)
	{
		fflush (stdout);
		scanf("%f", &array[i]);
	}
	printf("Enter the elements to be searched: ");
	fflush (stdout);
	scanf("%f", &x );
	for (i=0 ; i<n ; i++)
	{
		if (x == array[i])
		{
			printf("%d",i +1);
		}
	}


}
