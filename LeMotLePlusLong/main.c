#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#define N 9

char p, q, k;
char C='c', V='v';
char voyelles[6+1]="AEIOUY", consonnes[20+1]="BCDFGHJKLMNPQRSTVWXZ";

typedef struct joueur{
	char nom[30];
	char propo[9];
	int num;
	int score;
} Joueur;Joueur joueurs[2];



void lecteur(char* lettres, char* motlepluslong)
{
    int i, j, motvalide, lettrevalide;
    char mot[32]={0}, utilisee[N];
    FILE* dictionnaire = fopen("dictionnaire.txt", "r");

    while ( fgets(mot, 32, dictionnaire)!=NULL )
    {
        for ( i=0; i<N; utilisee[i]=0, i++ );
        motvalide=1;

        for ( i=0; mot[i+1]!='\0'; i++ )
        {
            lettrevalide=0;
            for ( j=0; lettres[j]!='\0'; j++ )
            {
                if ( mot[i]==lettres[j] && utilisee[j]!=1 )
                {
                    utilisee[j]=1;
                    lettrevalide=1;
                    break;
                }
            }

            if ( lettrevalide==0 )
            {
                motvalide=0;
                break;
            }
        }

        if ( motvalide!=0 && motlepluslong[i-1]=='\0' )
            for ( i=0; mot[i]!='\0'; motlepluslong[i]=mot[i], i++);
    }

    fclose(dictionnaire);

}

//Permet de positionner le curseur de souris sur l'écran à l'endroit de coordonnées x,y
void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    fflush(stdout);
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

//Pour effacer l'écran
void clrscr()
{
  system("cls");
}


//Fonction pour dessiner un rectangle
void rectangle(int x, int y, int lon, int haut)
{
     int i;
     gotoxy(x,y); printf("%c",218);
     gotoxy(x+lon,y); printf("%c",191);
     gotoxy(x, y+haut); printf("%c",192);
     gotoxy(x+lon, y+haut); printf("%c",217);
     for (i=1; i<lon;i++)
     {
         gotoxy(x+i,y); printf("%c",196);
         gotoxy(x+i,y+haut); printf("%c",196);
     }
     for (i=1; i<haut;i++)
     {
         gotoxy(x,y+i); printf("%c",179);
         gotoxy(x+lon,y+i); printf("%c",179);
     }
}

int AffichageMenu(){
	int a=33, b=8, z;
	int esp=a+11;
	srand(time(NULL));

	int t, num;
	printf("Entrer le nom du premier joueur\n");
	scanf("%s",&joueurs[0].nom);
	joueurs[0].num = 1;
	printf("Entrer le nom du deuxieme joueur\n");
	scanf("%s",&joueurs[1].nom);
	joueurs[1].num = 2;
	printf("Entrer le numero du joueur qui commence le jeu :\n");
	scanf("%d",&num);
	printf("Entrer le nombre de tour :\n");
	scanf("%d",&t);
	system("PAUSE");
	system("cls");
	rectangle(25,5, 90, 35);

	rectangle(a-3,b-1,8,3);
	rectangle(a+10,b-1,50,3);
	rectangle(a+67,b-1,8,3);
	rectangle(a+15,b+5,40,3);
	rectangle(a+15,b+12,40,3);
	rectangle(a+15,b+16,40,3);
	rectangle(a+15,b+22,40,3);

	gotoxy(a-2,b+3);printf("%s",joueurs[0].nom);
	gotoxy(a-2,b+4);printf("Choix: ");

	gotoxy(a+68,b+3);printf("%s",joueurs[1].nom);
	gotoxy(a+68,b+4);printf("Choix: ");

	gotoxy(a+27,b+3);printf("Grille de lettres");

	gotoxy(a+25,b+9);printf("Zone de propositions");
	gotoxy(a+20,b+20);printf("Zone d'affichage des propositions");
	gotoxy(a+17,b+26);printf("Affichage proposition de l'ordinateur");

	char lettres[9] = {0};
	for(z=0; z<9; z++){
		if(num==1){
			gotoxy(a+4,b+4);scanf(" %c",&p);
			num=2;
		}
		else{
			gotoxy(a+74,b+4);scanf(" %c",&p);
			num=1;
		}
		if(p==C){
			k=consonnes[rand()%20];
			lettres[z] = k;
		}
		else{
			k=voyelles[rand()%6];
			lettres[z] = k;
		}
		gotoxy(esp,b);printf("%c",k);
		esp+=6;
	}

    void mdp(char saisie[], int taille){
		int n=0;
		for(n=0; (saisie[n] = getch())!='\r'; n++){
            printf("*");fflush(stdin);
		}
		saisie[n]='\0';
	}

	while(t>0)
    {
        if(num == 1){
            gotoxy(a+40,b+7);mdp(joueurs[1].propo,9);
            gotoxy(a+22,b+7);mdp(joueurs[0].propo,9);
        }
        if(num == 2){
            gotoxy(a+22,b+7);mdp(joueurs[0].propo,9);
            gotoxy(a+40,b+7);mdp(joueurs[1].propo,9);
        }
        gotoxy(a+20,b+14);printf("%s : %s",joueurs[0].nom, joueurs[0].propo);
        gotoxy(a+20,b+18);printf("%s : %s",joueurs[1].nom, joueurs[1].propo);

        char mot[40] = "";
        char proposition1[9] = "";
        char proposition2[9] = "";
        for(int f=0; f<10; f++){
            proposition1[f] = joueurs[0].propo[f];
            proposition2[f] = joueurs[1].propo[f];
        }
        char mt[9];
        int point1 = 0, point2 = 0;
        FILE* dictionnaire=fopen("dictionnaire.txt", "r");
        while (fgets(mot, 9, dictionnaire) != NULL )
        {
            for(int p=0; p<2; p++)
            {
                if(proposition1[p] == mot[p]){
                    point1 = strlen(proposition1);
                }
                if(proposition2[p] == mot[p]){
                    point2 = strlen(proposition2);
                }
            }

        }
        gotoxy(a+1,b);printf("%d", point1);
        gotoxy(a+71,b);printf("%d", point2);
        fclose(dictionnaire);
        t--;
    }

    char motlepluslong[N+1]={0};
	while (1)
	{
        for (int i=0; motlepluslong[i]!='\0'; motlepluslong[i]='\0', i++ );
        lecteur(lettres, motlepluslong);

        if (motlepluslong[0]!='\0'){
            gotoxy(a+18,b+24);printf("%s", motlepluslong);
        }
        else{
            gotoxy(a+18,b+24);printf(" Aucun mot dans le dictionnaire !");
        }
	}

    fclose(dictionnaire);

}


int main() {

	int A = AffichageMenu();

	printf("\n\n\n\n\n\n\n");

	return 0;
}
