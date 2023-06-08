#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include "Moyenne.h"

int main(int argc, char *argv[])
{
   int i=0, nbr=0;
   double p=0;
   printf("This program calculates the values's average in a table. Enter the number of elements in the table:\n");
   scanf("%d", &nbr);
   int tableau[nbr];
   printf("Fill the table:\n");
   for(i=0; i<nbr; i++)
   {
       printf("Enter the element n%d: ", i+1);
       scanf("%d", &tableau[i]);
   }
   p = moyenneTableau(tableau, nbr);
   printf("The values's average in this table is %f.\n", p);
   return 0;

}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int s=0;
    double r=0, c=0;
    for(s=0; s<tailleTableau; s++)
    {
        c = c + tableau[s];
    }
    r =c/tailleTableau;
    return r;

}
