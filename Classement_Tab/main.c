#include <stdio.h>
#include <stdlib.h>
#include "Classement.h"

int main(int argc, char *argv[])
{
    int i=0, nbr=0;
    printf("This program classes a table from the smallest value to the biggest.\nEnter the number of elements of the table: ");
    scanf("%d", &nbr);
    int tableau[nbr], opt=0;
    for(i=0; i<nbr; i++)
    {
        printf("\nEnter the element n%d: ", i+1);
        scanf("%d", &tableau[i]);
    }
    printf("\nThe table is: \n\n");
    for(i=0; i<nbr; i++)
    {
        printf("|| %d || ", tableau[i]);
    }
    printf("\nWould you want to organize the table increasing or decreasing ?\n\n 1- Increasing\n\n 2- Decreasing\n\nChoose an option.\n\nEnter 1 or 2: ");
    do
    {
        scanf("%d", &opt);
    }
    while(opt > 2 || opt < 1);

    switch (opt){
        case 1:
            printf("\nYou have chosen to organize the table increasing.\n");
            break;
        case 2:
            printf("\nYou have chosen to organize the table decreasing.\n");
            break;
        default:
            printf("This option is not available.");
            break;
    }


    if(opt == 1)
    {
        ordonnerTableauc(tableau, nbr);
        printf("\nNow, the table looks like: \n\n");
        for(i=0; i<nbr; i++)
        {
            printf("|| %d || ", tableau[i]);
        }
    }
    else
    {
        ordonnerTableaud(tableau, nbr);
        printf("\nNow, the table looks like: \n\n");
        for(i=0; i<nbr; i++)
        {
            printf("|| %d || ", tableau[i]);
        }
    }
    printf("\n\n");
    return 0;

}


void ordonnerTableauc(int tableau[], int tailleTableau)
{
    int s=0, temp=0, echange=0, j=0;

    do
	{
		for(s=0; s<tailleTableau-1; s++)
		{
			if(tableau[s] > tableau[s+1])
			{
				temp=tableau[s];
				tableau[s]=tableau[s+1];
				tableau[s+1]=temp;
			}
		}
		j++;
	}
	while(j<tailleTableau-1);
}

void ordonnerTableaud(int tableau[], int tailleTableau)
{
    int s=0, temp=0, echange=0, j=0;

    do
	{
		for(s=0; s<tailleTableau-1; s++)
		{
			if(tableau[s] < tableau[s+1])
			{
				temp=tableau[s];
				tableau[s]=tableau[s+1];
				tableau[s+1]=temp;
			}
		}
		j++;
	}
	while(j<tailleTableau-1);
}
