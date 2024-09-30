#include <stdio.h>
int main()
{
	int x , y , z ;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%d %d", &x , &y);
	z=x;
	x=y;
	y=z;
	printf("The first number after swapping: %d \n",x);
	printf("The second number after swapping: %d",y);

}
