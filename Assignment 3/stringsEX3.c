#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100] , x ;
	int i ;
	printf("Enter a string: ");
	fflush (stdout);
	gets(str1);
	int n = strlen (str1) - 1;
	for ( i=0 ; i<n ;i++, n--)
	{
		x = str1[i];
		str1[i] = str1[n];
		str1[n] = x ;
	}
	printf("Reverse string is: %s", str1);
}
