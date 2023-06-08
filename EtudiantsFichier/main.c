#include <stdio.h>
#include <stdlib.h>

struct Etudiant
{
    char nom[20];
    char prenom[20];
};

void Saisir(struct Etudiant*TabEtu)
{
    for(int i=0; i<10; i++)
    {
        printf("\nEntrez les informations de l'etudiant no%d :\nNom : ", i+1);
        scanf("%s", TabEtu[i].nom);
        printf("Prenom : ");
        scanf("%s", TabEtu[i].prenom);
    }
}

void EcrireFichier(struct Etudiant*TabEtu)
{
    FILE*fichier = fopen("etudiant.txt","w");
    for(int i=0; i<10; i++)
    {
        fprintf(fichier,"Etudiant no %d:  %s  %s\n\n", i+1, TabEtu[i].nom, TabEtu[i].prenom);
    }
    fclose(fichier);
}

void AfficherFichier()
{
    FILE*f=NULL;
    char ch[128];
    f=fopen("etudiant.txt","r");
    printf("\n\nLes informations contenus dans le fichier: \n\n");
    while(fgets(ch,128,f)!=NULL)
    {
        printf("%s",ch);
    }
    fclose(f);
}

int main()
{
    struct Etudiant TabEtu[10];
    Saisir(TabEtu);
    EcrireFichier(TabEtu);
    AfficherFichier();
    return 0;

}
