#include <stdio.h>
#include <stdlib.h>
#include "Max.h"

int main(int argc, char *argv[])
{
    int i=0, maxi=0, nbr=0;
    printf("This program puts all the values of a table to 0 when those are more than the maximum.\nEnter the number of elements in the table:\n\n");
    scanf("%d", &nbr);
    int tableau[nbr];
    for(i=0; i<nbr; i++)
    {
        printf("Enter the element n%d: ", i+1);
        scanf("%d", &tableau[i]);
    }
    printf("Enter the maximum: ");
    scanf("%d", &maxi);
    printf("\nThe table is: \n\n");
    for(i=0; i<nbr; i++)
    {
        printf("|| %d || ", tableau[i]);
    }
    maximumTableau(tableau, nbr, maxi);

    printf("\n\nThe table now presents like:\n\n");
    for(i=0; i<nbr; i++)
    {
        printf("|| %d || ", tableau[i]);
    }
    printf("\n\n");
    return 0;

}


void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int s=0;
    for(s=0; s<tailleTableau; s++)
    {
        if(tableau[s] > valeurMax)
        {
            tableau[s]=0;
        }
    }
}
