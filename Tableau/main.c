#include <stdio.h>
#include <stdlib.h>

void Saisir(int T[], int longTab){
    for(int i=0; i<longTab; i++){
        printf("Entrez l'element numero %d:  ", i+1);
        scanf("%d", &T[i]);
    }
}

void Afficher(int T[], int nbr){
    printf("Le tableau est: \n");
    for(int i=0; i<nbr; i++){
        printf("|| %d || ", T[i]);
    }
}

int Trier(int T[], int nb){
    int temp=0, j=0;
    do{
        for(int i=0; i<nb; i++){
            if(T[i]>T[j]){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
            j++;
        }
    }
    while();
}


int main()
{
    int T[10];
    Saisir(T, 10);
    Afficher(T, 10);
    Tri(T, 10);
    Afficher(T, 10);


    return 0;
}
