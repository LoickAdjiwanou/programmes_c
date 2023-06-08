#include <stdio.h>
#include <math.h>

int main(void)
{
	int x=0;
	printf("Hello! I'm designed to determine if a whole number is peer or odd. \nEnter the number. \n");
	scanf("%d", &x);

	if(x%2==0)
	{
		printf("Your number is peer. \n");
	}
	else
	{
		printf("Your number is odd. \n");
	}

	return 0;

}
