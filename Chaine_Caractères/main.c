#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Saisir(char TabEtu[3][4][20])
{
    for(int i=0; i<3; i++){
        printf("\nEntrez les informations de l'etudiant no %d\n\n", i+1);
        for(int j=0; j<4; j++){
            switch (j){
                case 0:
                    printf("Entrer son nom: \n");
                    scanf("%s", &TabEtu[i][j]);
                break;
                case 1:
                    printf("Entrer son prenom: \n");
                    scanf("%s", &TabEtu[i][j]);
                break;
                case 2:
                    printf("Entrer son sexe (f ou m): \n");
                    scanf("%s", &TabEtu[i][j]);
                break;
                case 3:
                    printf("Entrer son age: \n");
                    scanf("%s", &TabEtu[i][j]);
                break;
            }
        }
    }
}


void Afficher(char TabEtu[3][4][20])
{
    for(int i=0; i<3; i++){
        printf("\n\nEtudiant no %d :", i+1);
        for(int j=0; j<4; j++){
            switch (j){
                case 0:
                    printf("%s ", TabEtu[i][j]);
                break;
                case 1:
                    printf("%s est de sexe ", TabEtu[i][j]);
                break;
                case 2:
                    if(TabEtu[i][2][0] == 'm'){
                        printf("masculin ");
                    }
                    else{
                        printf("feminin ");
                    }
                break;
                case 3:
                    printf("et a %s ans;\n", TabEtu[i][j]);
                break;
            }
        }
    }
}

int PlusJeuneEtudiant(char TabEtu[3][4][20])
{
    int indice = 0;
    for(int i=0; i<2; i++)
    {
        if(TabEtu[i][3][0] > TabEtu[i+1][3][0])
        {
            indice = i+1;
        }
    }
        return indice;
}




int main()
{
    char TabEtu[2][3][20] = {};
    Saisir(TabEtu);
    Afficher(TabEtu);
    int ind = PlusJeuneEtudiant(TabEtu);
    printf("\nL'etudiant le plus jeune est l'etudiant no %d.\n", ind+1);

    return 0;

}
