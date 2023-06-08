#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fichier = NULL;
    fichier = fopen("test.txt", "r");
    char lettre[1] = "";
    printf("Entrez une lettre: ");
    scanf("%c", &lettre[0]);
    char let[2] = "";
    int est = 0;
    while(fgets(let, 2, fichier) != NULL){
        if(lettre[0] == let[0]){
            est = 1;
        }
    }
    if(est != 0)
    {
        printf("La lettre est dans le fichier !\n");
    }
    else
    {
        printf("La lettre n'est pas dans le fichier !\n");
    }
    fclose(fichier);
    return 0;
}
