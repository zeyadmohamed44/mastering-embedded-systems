#include<stdio.h>

int prime(int x)
{
	int i , flag = 0 ;
	if (x==1 || x==0)
		return flag = 1 ;
	for (i=2 ; i<=(x/2);++i)
	{
		 if  (x%i==0)
		{
			flag =1;
			break;

		}
	}
	return flag ;
}


int main ()
{
	int a , b , i , flag ;
	printf("Enter two numbers (intervals): ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Prime numbers between %d and %d are: ", a , b);
	fflush(stdout);
	for (i=a ; i<=b ; ++i)
	{
		flag = prime(i);
		if (flag==0)
		{
			printf(" %d",i);
		}
	}

}


