#include <stdlib.h>
#include <stdio.h>

struct Etudiant  //007, d�finition de la structure Etudiant, par moi Loick Adjiwanou
{
    char nom[20];  //007, d�claration de la variable de structure nom de type char, par moi Loick Adjiwanou
    char prenom[20];  //007, d�claration de la variable de structure prenom de type char, par moi Loick Adjiwanou
    char sexe[10];  //007, d�claration de la variable de structure sexe de type char, par moi Loick Adjiwanou
    int age;  //007, d�claration de la variable de structure age de type int, par moi Loick Adjiwanou
};

void Saisir(struct Etudiant *TabEtu)//007, cr�ation d'une fonction pour enregistrer les 10 etudiants, par moi Loick Adjiwanou
{
    for(int i=0; i<10; i++)//007, boucle pour r�p�ter l'enregistrement des 10 �tudiants, par moi Loick Adjiwanou
    {
        printf("\nEntrez les informations de l'etudiant no%d :\nNom : ", i+1); //007, affichage � l'�cran du texte, par moi Loick Adjiwanou
        scanf("%s", TabEtu[i].nom);//007, saisir le nom d'un �tudiant, par moi Loick Adjiwanou
        printf("Prenom : ");  //007, affichage du texte � l'�cran, par moi Loick Adjiwanou
        scanf("%s", TabEtu[i].prenom);//007, saisir le prenom d'un �tudiant, par moi Loick Adjiwanou
        printf("Sexe : ");//007, affichage du texte � l'�cran, par moi Loick Adjiwanou
        scanf("%s", TabEtu[i].sexe);//007, saisir le sexe d'un �tudiant, par moi Loick Adjiwanou
        printf("Age : ");//007, affichage du texte � l'�cran, par moi Loick Adjiwanou
        scanf("%d", &TabEtu[i].age);//007, saisir l'age d'un �tudiant, par moi Loick Adjiwanou
    }
}

void Afficher(struct Etudiant *TabEtu)//007, cr�ation d'une fonction pour afficher les 10 �tudiants enregistr�s, par moi Loick Adjiwanou
{
    printf("\nInformations des etudiants: \n\n");  //007, affichage tu texte � l'�cran, par moi Loick Adjiwanou
    for(int i=0; i<10; i++)  //007, boucle pour r�p�ter l'affichage des informations pour afficher les 10 �tudiants, par moi Loick Adjiwanou
    {
        printf("Etudiant no%d : \n Nom : %s \n Prenom : %s \n Sexe : %s \n Age : %d \n\n", i+1, TabEtu[i].nom, TabEtu[i].prenom, TabEtu[i].sexe, TabEtu[i].age);  //007, affichage � l'�cran du texte avec les informations nom, pr�nom, sexe et age de chaque �tudiant, par moi Loick Adjiwanou
    }
}

void PlusJeuneEtudiant(struct Etudiant *TabEtu)//007, fonction de type Etudiant qui renvoi l'/les �tudiant(s) le(s) plus jeune(s), par moi Loick Adjiwanou
{
    struct Etudiant Etud;//007, cr�ation d'une variable de type Etudiant pour y mettre les informations de l'�tudiant ayant le plus petit age, par moi Loick Adjiwanou
    Etud = TabEtu[0];  //007, stockage des information du premier �tudiant parmis les 10 dans la variable Etud de type Etudiant,  par moi Loick Adjiwanou
    for (int i=1; i<10; i++)//007, boucle pour comparer les ages des 9 autes �tudiants (raison pour laquelle i commence � 1 et non � 0), par moi Loick Adjiwanou
    {
        if (Etud.age > TabEtu[i].age)//007, condition pour comparer les ages des �tudiants, par moi Loick Adjiwanou
        {
            Etud = TabEtu[i];//007, affectation des informations du plus jeune �tudiant dans la variable Etud, par moi Loick Adjiwanou
        }
    }
    printf("L'(es)etudiant(s) le(s) plus jeune(s) est(sont): \n");  //007, affichage du texte � l'�cran, par moi Loick Adjiwanou
    //007, il peut y avoir plus d'un �tudiant poss�dant le plus petit age parmis les �tudiants, par moi Loick Adjiwanou
    for(int j=0; j<10; j++)  //007, boucle pour v�rifier si parmis les �tudiants un autre �tudiant a le meme age que l'�tudiant le plus jeune trouv� et dont les informations sont dans la variable Etud, par moi Loick Adjiwanou
    {
        if(TabEtu[j].age == Etud.age)  //007, condition pour comparer les ages des autre �tudiants � l'age de l'�tudiant avec le plus petit age trouv�, par moi Loick Adjiwanou
        {
            printf(" Nom: %s \n Prenom: %s \n Sexe: %s \n Age: %d \n\n", TabEtu[j].nom, TabEtu[j].prenom, TabEtu[j].sexe, TabEtu[j].age);  //007, affichage des information de tous les �tudiants les plus jeunes, par moi Loick Adjiwanou
        }
    }


}

int main()//007, fonction principale "main", par moi Loick Adjiwanou
{
    struct Etudiant TabEtu[10];//007, d�claration du tableau des 10 �tudiants ayant pour type la structure, par moi Loick Adjiwanou
    Saisir(TabEtu);  //007, appel de la fonction Saisir dans la fonction principale, par moi Loick Adjiwanou
    Afficher(TabEtu);  //007, appel de la fonction Afficher dans la fonction principale, par moi Loick Adjiwanou
    PlusJeuneEtudiant(TabEtu);  //007, appel de la fonction PlusJeuneEtudiant dans la fonction principale, par moi Loick Adjiwanou
    return 0;  //007, valeur de retour de la fonction principale, par moi Loick Adjiwanou
}
