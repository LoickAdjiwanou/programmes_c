#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fichier = NULL;

    //Ecrire un caractere
    fichier = fopen("Caractere.txt","w");
    printf("Entrez un caractere: ");
    char carac = 0;
    scanf("%c", &carac);
    fputc(carac, fichier);
    fclose(fichier);

    //Ecrire un mot
    fichier = fopen("Mot.txt","w");
    printf("Entrez un mot: ");
    char mot[20] = "";
    scanf("%s", &mot);
    fputs(mot, fichier);
    fclose(fichier);

    //Ecrire une phrase (avec une variable par exemple)
    fichier = fopen("Phrase.txt","w");
    char nom[30] = "";
    char prenom[30] = "";
    int age = 0;
    printf("Entrez votre nom: ");
    scanf("%s", &nom);
    printf("Entrez votre prenom: ");
    scanf("%s", &prenom);
    printf("Entrez votre age: ");
    scanf("%d", &age);
    fprintf(fichier, "L'utilisateur du programme s'appelle %s %s et est age de %d ans !", nom, prenom, age);
    fclose(fichier);

    //Affichage d'un caractere
    fichier = fopen("Caractere.txt","r");
    char caracPresent = 0;
    caracPresent = fgetc(fichier);
    printf("\nLe caractere present dans le fichier Caractere.txt est: %c", caracPresent);
    fclose(fichier);

    //Affichage d'un mot
    fichier = fopen("Mot.txt","r");
    char motPresent[30] = "";
    fgets(motPresent, 30, fichier);
    printf("\nLe mot ecrit dans le fichier Mot.txt est: %s", motPresent);
    fclose(fichier);

    //Affichage d'une phrase
    fichier = fopen("Phrase.txt","r");
    char p1[20] = "", p2[20] = "", p3[20] = "", p4[20] = "", p5[20] = "", p6[20] = "", p7[20] = "", p8[20] = "", p9[20] = "", p10[20] = "", p11[20] = "", p12[20] = "", p13[20] = "";
    fscanf(fichier, "%s %s %s %s %s %s %s %s %s %s %s %s %s", &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12, &p13);
    printf("\nLa phrase ecrite dans le fichier Phrase.txt est: %s %s %s %s %s %s %s %s %s %s %s %s %s ", p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
    fclose(fichier);

    //Position du curseur dans le fichier Mot.txt
    fichier = fopen("Mot.txt","r");
    char motLu[30] = "";
    fgets(motLu, 30, fichier);
    long positionCurseur = ftell(fichier);
    printf("\nLa position du curseur dans le fichier Mot.txt est : %ld", positionCurseur);
    //Positionnement du curseur au début du fichier Mot.txt
    fseek(fichier, 0, SEEK_SET);  //Ou rewind(fichier);
    long newPositionCurseur = ftell(fichier);
    printf("\nLa position du curseur dans le fichier Mot.txt est maintenant: %ld", newPositionCurseur);
    fclose(fichier);

    //Renommer un fichier
    fichier = fopen("Fichier.txt","w");
    fclose(fichier);
    rename("Fichier.txt","NouveauFichier.txt");

    //Supprimer un fichier
    fichier = fopen("FichierASupprimer.txt","w");
    fclose(fichier);
    remove("FichierASupprimer.txt");

    return 0;
}
