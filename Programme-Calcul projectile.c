#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int func(int choix, float vit, float mas, float grav, float alp);

int main(int argc, char* argv[]){
	int choixmenu=0;
	float vitesse=0, masse=0, gravite=0, alpha=0, R=0;
	printf("Bonjour ! Ce programme calcule la portée et la flèche d'un projectile.\n\n#---MENU---#:\n1- Calculer la portée\n2- Calculer la flèche\n\nChoississez entre 1 ou 2: \n\n");
	scanf("%d", %choixmenu);

	switch choixmenu{
		case 1:
		printf("Vous avez choisit de calculer la portée d'un projectile. Entrez les valeurs des composantes V, m, g et alpha.\nEntrez V: ");
		scanf("%f", &vitesse);
		printf("\nEntrez m: ");
		scanf("%f", &masse);
		printf("\nEntrez g: ");
		scanf("%f", &gravite);
		printf("\nEntrez alpha: ");
		scanf("%f", &alpha);
		R=func(&choixmenu, &vitesse, &masse, &gravite, &alpha);
		printf("La portée de votre projectile est égal à %f", R);
		break;

		case 2:
		printf("Vous avez choisit de calculer la flèche d'un projectile. Entrez les valeurs des composantes V, m, g et alpha.\nEntrez V: ");
		scanf("%f", &vitesse);
		printf("\nEntrez m: ");
		scanf("%f", &masse);
		printf("\nEntrez g: ");
		scanf("%f", &gravite);
		printf("\nEntrez alpha: ");
		scanf("%f", &alpha);
		R=func(&choixmenu, &vitesse, &masse, &gravite, &alpha);
		printf("La flèche de votre projectile est égal à %f", R);
		break;
	}
}

	
int func(int choix, float vit, float mas, float grav, float alp){
	int Z=0;
	if(choix == 1){
		Z = ((2*vit*vit)/(mas*grav*sin(alp)));
	}
	else{
		Z = ((mas*grav)/(2*vit*vit*cos(alp)));
	}
	return Z;
}