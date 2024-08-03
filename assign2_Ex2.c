#include <stdio.h>
int main ()
{
	char x ;
	printf("Enter an alphabet:");
	fflush (stdout);
	scanf("%c",&x);

	if ( x == 'a' || x == 'o' || x == 'e' || x == 'i' || x == 'u' || x == 'A' || x == 'O' || x == 'E' || x == 'I' || x == 'U' )
	{
		printf("%c is vowel", x);
	}
	else
	{
		printf("%c is consonant", x);
	}

}
