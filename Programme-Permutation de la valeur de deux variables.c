#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int x=0, y=0, z=0;
	printf("Hello! I'm designed to permute the value of two variables. \nEnter the variable x and y.\nEnter x: \n");
	scanf("%d", &x);
	printf("Enter y: \n");
	scanf("%d", &y);
	z=x;
	x=y;
	y=z;
	printf("Now, x=%d and y=%d.\n", x, y);

    return 0;

}
