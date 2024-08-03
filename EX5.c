#include <stdio.h>
int main ()
{
	char x;
	printf("Enter character:");
	fflush (stdout);
	scanf("%c", &x);
	printf("ASCII value of %c = %d ",x,x);

}
