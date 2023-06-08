#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int z=0;
	printf("Ce programme calcul l image d une fonction par un reel est une approximation de la derivee de cette fonction.\nChoisissez l operation que vous voulez effectuer, entrez 1 ou 2:\n\n1- Image de la fonction f par un reel\n2- Approximation de la derivee de cette fonction\n\n");
	scanf("%d", &z);

	switch (z) {
	case 1:
		printf("Vous voulez calculer l'image de la fonction f par le réel x.\n");
		break;
	case 2:
		printf("Vous voulez calculer l'approximation de la dérivée de la fonction f.\n");
		break;
	default:
		printf("Option invalide.\n");
	}


	if(z=1){
		int a=0;
		float b=0;
		printf("Entrez le nombre dont vous voulez calculer l image par la fonction f(x)=(2x+3)*(3x²+2) : \n");
		scanf("%d", &a);
		b=(((2*a)+3)*((3*a*a)+2));
		printf("L image de f(x) par %d est %f. \n", a, b);
	}
	else{
		int a=0, b=0, c=0;
		float d=0, e=0, f=0;
		printf("Entrez la valeur du point x et celle du parametre h: \nEntrez la valeur de x: \n");
		scanf("%d", &a);
		printf("Entrez la valeur de h: \n");
		scanf("%d", &b);
		c=a+b;
		d=(((2*c)+3)*((3*c*c)+2));
		e=(((2*a)+3)*((3*a*a)+2));
		f=((d-e)/b);
		printf("Une approximation de la derivee f(x)=(2x+3)*(3x²+2) est f'(x)=%f. \n", f);
	}

	return 0;
}