#include <stdio.h>
int main()
{
	int n , i ;
	float input , sum=0 , average=0 ;
	printf("Enter the no. of inputs: ");
	 fflush(stdout);
	scanf("%d", &n );
	for (i=1 ; i<=n ; i++)
	{
		printf("Enter input%d: ", i);
		 fflush(stdout);
		scanf("%f", &input);
		if (input< 0.0)
			break;
		sum = sum + input ;
	}
	average = sum/(i-1) ;
	printf("average = %.2f", average);
}
