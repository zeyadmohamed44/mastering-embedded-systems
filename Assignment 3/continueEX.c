#include <stdio.h>
int main ()
{
	int i ;
	float product = 1 , n ;
	for (i=0 ; i<4 ; i++)
	{
		printf("enter input%d: ", i + 1);
		fflush (stdout);
		scanf("%f", &n);
		if ( n==0.0 )
			continue;
		product = product*n ;
	}
	printf("product= %.2f",  product);;
}
