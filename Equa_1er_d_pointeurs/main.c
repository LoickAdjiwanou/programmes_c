#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"Equa.h"

int main(int argc, char *argv[ ])
{
    int x=0, y=0, nbr=0;
    float p=0;
    printf("This program helps to resolve an one degree's equation.\n\nEnter the values of the coefficients x and y :\n\nEnter x : ");
    scanf("%d", &x);
    printf("\nEnter y : ");
    scanf("%d", &y);

    nbr = resolve(x, y, &p);

    printf("\nThis equation admits %d solution(s).\n", nbr);   //Prints the number of solutions, y (or *s) will be modified in the function

    printf("\nThe solution of this equation is : %f.\n", p);   //Prints the solution of the equation, p (or *x) will be modified in the function

    return 0;

}

 int resolve(int a, int b, float *x)
 {   //The equation is like ax + b = 0

    int k=0, q=0;
    if(a == 0)
    {
        k;
    }
    else if(b == 0)
    {
        q = 0;
        k = 1;
    }
    else if(b != 0)
    {
        q = (-b / a);
        k = 1;
    }

    *x = q;
    return k;

 }
