#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include"Copie.h"

int main(int argc, char *argv[])
{
    int nbr=0, i=0;
    printf("This program fill the table T with the table P. Enter the number of elements in the table P:\n");
    scanf("%d", &nbr);
    int premier[nbr], deuxieme[nbr];
    for(i=0; i<nbr; i++)
    {
        printf("Enter the element n%d: ", i+1);
        scanf("%d", &premier[i]);
    }
    printf("The table P is like:\n");
    for(i=0; i<nbr; i++)
    {
        printf("|| %d || ", premier[i]);
    }
    copie(premier, deuxieme, nbr);
    printf("\nThe table T looks like:\n\n");
    for(i=0; i<nbr; i++)
    {
        printf("|| %d || ", deuxieme[i]);
    }
    printf("\n\n");
    return 0;

}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int s=0;
    for(s=0; s<tailleTableau; s++)
    {
        tableauCopie[s]=tableauOriginal[s];
    }
}
