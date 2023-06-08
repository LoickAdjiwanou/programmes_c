#include <stdio.h>
#include <stdlib.h>
#include"Sum.h"

int main(int argc, char *argv[ ])
{
    int q=0, i=0, nbr=0;
    printf("This program calculates the sum of the values in a table.\nEnter the number of elements in the table:\n");
    scanf("%d", &nbr);
    int tableau[nbr];
    printf("Fill the table:\n");
    for(i=0; i<nbr; i++)
    {
        printf("Enter the element n%d ", i+1);
        scanf("%d", &tableau[i]);
    }

    q = sommeTableau(tableau, nbr);

    printf("The sum of the elements of the table is %d.\n", q);

    return 0;

}

int sommeTableau(int tableau[], int tailleTableau)
{
    int s=0, p=0;
    for(s=0; s<tailleTableau; s++)
    {
        p = p + tableau[s];
    }
    return p;
}
