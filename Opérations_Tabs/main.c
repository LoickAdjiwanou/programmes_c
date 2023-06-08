#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include"Opérations.h"

int main(int argc, char *argv[])
{
    int cont=0;
    do
    {
        program();
        printf("\nDo you wish to continue ?\n\n 1- Yes ;\n 2- No ;\n\nEnter a number: ");
        scanf("%d", &cont);
    }
    while(cont != 2);
}

int program()
{
    int choix=0;
    printf("What would you like to do ?\n\n 1- Sum of the elements of a table ;\n 2- A table's average ;\n 3- Copy a table in another one ;\n 4- Replace all the values higher than a maximum to 0 ;\n 5- Class the values of a table ;\n\nChoose an option: ");
    scanf("%d", &choix);
    if(choix<1 || choix>5)
    {
        do
        {
            printf("Choose an option from the menu: ");
            scanf("%d", &choix);
        }
        while(choix<1 || choix >5);
    }

    switch (choix)
    {
    case 1:
        prog_sommeTableau();
        break;

    case 2:
        moyenne_vals();
        break;

    case 3:
        copie_tab();
        break;

    case 4:
        max_value();
        break;

    case 5:
        class_tab();
        break;

    default:
        printf("\n");
    break;

    }
}


int prog_sommeTableau()
{
    int q=0, i=0, nbr=0;
    printf("You have chosen to do the sum of the values in a table.\nEnter the number of elements in the table:\n");
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

int moyenne_vals()
{
   int i=0, nbr=0;
   double p=0;
   printf("You have chosen to calculate the values's average in a table. Enter the number of elements in the table:\n");
   scanf("%d", &nbr);
   int tableau[nbr];
   printf("Fill the table:\n");
   for(i=0; i<nbr; i++)
   {
       printf("Enter the element n%d: \n", i+1);
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

int copie_tab()
{
    int nbr=0, i=0;
    printf("You have chosen to fill a table T with a table P. Enter the number of elements in the table P:\n");
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

int max_value()
{
    int i=0, maxi=0, nbr=0;
    printf("You have chosen an option that puts all the values of a table to 0 when those are more than the maximum.\nEnter the number of elements in the table:\n\n");
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

int class_tab()
{
    int i=0, nbr=0;
    printf("You have chosen to organize the values in a table.\nEnter the number of elements of the table: ");
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
