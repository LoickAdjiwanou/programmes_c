#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	printf("Ce programme calcule la duree ou la hauteurd une bille pendant un trajet. Choisissez quel calcul vous voulez effectuer, entrez 1 ou 2: \n\n1- La hauteur \n2- La duree du parcourt \n\n");
	scanf("%d", %x);
	switch x
		case 1
		printf("Vous avez choisi de calculer la hauteur. \n");
		break;

		case 2
		printf("Vous avez choisi de calculer la duree du parcourt. \n");
		break;


	if(x=1){
		float t=0, h=0, g=9.81;
		printf("Entrez la duree parcourue par la bille: \n");
		scanf("%f", &t);
		h=(0.5(g*t*t));
		printf("La hauteur de la bille est egale a %f. \n", h);
	}
	else{
		float t=0, h=0, g=9.81;
		printf("Entrez la hauteur: \n");
		scanf("%f", &h);
		t=sqrt((h/(0.5*g)));
		printf("La duree du parcourt est de %f secondes. \n", t);
	}

	return 0;

}