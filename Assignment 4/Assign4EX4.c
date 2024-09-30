#include <stdio.h>

int calcpower(int x ,int y)
{
	if (y==0)
		return 1 ;
	else
	{
		return x* calcpower(x,y-1);
	}
}


int main()
{
	int base , power;
	printf("Enter base number:");
	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number:");
	fflush(stdout);
	scanf("%d",&power);
	int answer = calcpower (base ,power);
	printf("%d^%d = %d",base, power ,answer);
}
