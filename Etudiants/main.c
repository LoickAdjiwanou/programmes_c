#include <stdlib.h>
#include <stdio.h>

struct Etudiant  //007, définition de la structure Etudiant, par moi Loick Adjiwanou
{
    char nom[20];  //007, déclaration de la variable de structure nom de type char, par moi Loick Adjiwanou
    char prenom[20];  //007, déclaration de la variable de structure prenom de type char, par moi Loick Adjiwanou
    char sexe[10];  //007, déclaration de la variable de structure sexe de type char, par moi Loick Adjiwanou
    int age;  //007, déclaration de la variable de structure age de type int, par moi Loick Adjiwanou
};

void Saisir(struct Etudiant *TabEtu)//007, création d'une fonction pour enregistrer les 10 etudiants, par moi Loick Adjiwanou
{
    for(int i=0; i<10; i++)//007, boucle pour répéter l'enregistrement des 10 étudiants, par moi Loick Adjiwanou
    {
        printf("\nEntrez les informations de l'etudiant no%d :\nNom : ", i+1); //007, affichage à l'écran du texte, par moi Loick Adjiwanou
        scanf("%s", TabEtu[i].nom);//007, saisir le nom d'un étudiant, par moi Loick Adjiwanou
        printf("Prenom : ");  //007, affichage du texte à l'écran, par moi Loick Adjiwanou
        scanf("%s", TabEtu[i].prenom);//007, saisir le prenom d'un étudiant, par moi Loick Adjiwanou
        printf("Sexe : ");//007, affichage du texte à l'écran, par moi Loick Adjiwanou
        scanf("%s", TabEtu[i].sexe);//007, saisir le sexe d'un étudiant, par moi Loick Adjiwanou
        printf("Age : ");//007, affichage du texte à l'écran, par moi Loick Adjiwanou
        scanf("%d", &TabEtu[i].age);//007, saisir l'age d'un étudiant, par moi Loick Adjiwanou
    }
}

void Afficher(struct Etudiant *TabEtu)//007, création d'une fonction pour afficher les 10 étudiants enregistrés, par moi Loick Adjiwanou
{
    printf("\nInformations des etudiants: \n\n");  //007, affichage tu texte à l'écran, par moi Loick Adjiwanou
    for(int i=0; i<10; i++)  //007, boucle pour répéter l'affichage des informations pour afficher les 10 étudiants, par moi Loick Adjiwanou
    {
        printf("Etudiant no%d : \n Nom : %s \n Prenom : %s \n Sexe : %s \n Age : %d \n\n", i+1, TabEtu[i].nom, TabEtu[i].prenom, TabEtu[i].sexe, TabEtu[i].age);  //007, affichage à l'écran du texte avec les informations nom, prénom, sexe et age de chaque étudiant, par moi Loick Adjiwanou
    }
}

void PlusJeuneEtudiant(struct Etudiant *TabEtu)//007, fonction de type Etudiant qui renvoi l'/les étudiant(s) le(s) plus jeune(s), par moi Loick Adjiwanou
{
    struct Etudiant Etud;//007, création d'une variable de type Etudiant pour y mettre les informations de l'étudiant ayant le plus petit age, par moi Loick Adjiwanou
    Etud = TabEtu[0];  //007, stockage des information du premier étudiant parmis les 10 dans la variable Etud de type Etudiant,  par moi Loick Adjiwanou
    for (int i=1; i<10; i++)//007, boucle pour comparer les ages des 9 autes étudiants (raison pour laquelle i commence à 1 et non à 0), par moi Loick Adjiwanou
    {
        if (Etud.age > TabEtu[i].age)//007, condition pour comparer les ages des étudiants, par moi Loick Adjiwanou
        {
            Etud = TabEtu[i];//007, affectation des informations du plus jeune étudiant dans la variable Etud, par moi Loick Adjiwanou
        }
    }
    printf("L'(es)etudiant(s) le(s) plus jeune(s) est(sont): \n");  //007, affichage du texte à l'écran, par moi Loick Adjiwanou
    //007, il peut y avoir plus d'un étudiant possédant le plus petit age parmis les étudiants, par moi Loick Adjiwanou
    for(int j=0; j<10; j++)  //007, boucle pour vérifier si parmis les étudiants un autre étudiant a le meme age que l'étudiant le plus jeune trouvé et dont les informations sont dans la variable Etud, par moi Loick Adjiwanou
    {
        if(TabEtu[j].age == Etud.age)  //007, condition pour comparer les ages des autre étudiants à l'age de l'étudiant avec le plus petit age trouvé, par moi Loick Adjiwanou
        {
            printf(" Nom: %s \n Prenom: %s \n Sexe: %s \n Age: %d \n\n", TabEtu[j].nom, TabEtu[j].prenom, TabEtu[j].sexe, TabEtu[j].age);  //007, affichage des information de tous les étudiants les plus jeunes, par moi Loick Adjiwanou
        }
    }


}

int main()//007, fonction principale "main", par moi Loick Adjiwanou
{
    struct Etudiant TabEtu[10];//007, déclaration du tableau des 10 étudiants ayant pour type la structure, par moi Loick Adjiwanou
    Saisir(TabEtu);  //007, appel de la fonction Saisir dans la fonction principale, par moi Loick Adjiwanou
    Afficher(TabEtu);  //007, appel de la fonction Afficher dans la fonction principale, par moi Loick Adjiwanou
    PlusJeuneEtudiant(TabEtu);  //007, appel de la fonction PlusJeuneEtudiant dans la fonction principale, par moi Loick Adjiwanou
    return 0;  //007, valeur de retour de la fonction principale, par moi Loick Adjiwanou
}
