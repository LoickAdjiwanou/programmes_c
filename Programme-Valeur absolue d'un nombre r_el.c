#include<stdio.h>
#include<math.h>

int main ()
{
    printf("Hello! I am designed to find the absolute value of a real number. \n");
	float x, z;
	printf("Enter a number: \n");
	scanf("%f", &x);
	z=abs(x);
	printf("%f", z);
	return 0;
}
