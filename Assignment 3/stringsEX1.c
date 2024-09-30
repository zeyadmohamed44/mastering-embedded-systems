#include <stdio.h>
int main ()
{
	int i , frequency=0 ;
	char str1 [100] , x ;
	printf("Enter a string: ");
	fflush (stdout);
	gets(str1);
	printf("Enter a character to find frequency: ");
	fflush (stdout);
	scanf("%c", &x );
	for ( i=0 ; str1[i]!=0 ; i++)
	{
		if (str1[i]==x)
		{
			++frequency ;
		}
	}
	printf("frequency of %c = %d", x ,frequency);
}
