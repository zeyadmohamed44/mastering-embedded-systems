#include <stdio.h>
int main ()
{
	int i ;
	char str1[100] ;
	printf("Enter a string: ");
	fflush (stdout);
	gets(str1);
	for (i=0 ; str1[i]!=0 ; ++i);
	printf("The length of string= %d", i);
}
