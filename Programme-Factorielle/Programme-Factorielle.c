#include<stdio.h>
#include<stdlib.h>
#include"factoriel.h"   /*Associer à la bibliothèque facto*/

int main()
{

    int n, p, cnp;
    printf("Enter n: \n");
    scanf("%d", &n);
    printf("Enter p: \n");
    scanf("%d", &p);

    cnp=facto(n)/(facto(p)*facto(n-p));
    printf("The combinations of %d and %d are %d", p, n, cnp);

    return 0;

}

