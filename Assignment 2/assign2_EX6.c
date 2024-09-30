#include <stdio.h>
int main ()
{
	int x , i;
	int result=0;
	printf("Enter an integer:");
	fflush (stdout);
	scanf("%d",&x);
	for (i=0 ;i<=x ; ++i)
	{
		result=result+i;
	}
	printf("sum = %d",result);
}
