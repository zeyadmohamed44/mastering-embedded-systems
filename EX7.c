#include <stdio.h>
int main ()
{
	int x , y ;
		printf("Enter two numbers:");
		fflush(stdout);
		scanf("%d %d", &x , &y);
		x = x + y ;
		y = x - y ;
		x = x - y ;
		printf("The first number after swapping: %d \n",x);
		printf("The second number after swapping: %d",y);

}
