#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Changer le contenu en anglais
int IMC(float p, float t){
	float resultat = 0.0;
	int cas = 0;
	resultat = (p/(t*t));
	if(resultat<18.5){
		cas = 1;
	}
	else if(resultat>=18.5 && resultat<25.0){
		cas = 2;
	}
	else if(resultat>=25.0 && resultat<30){
		cas = 3;
	}
	else if(resultat>=30 && resultat<35){
		cas = 4;
	}
	else if(resultat>=35 && resultat<40){
		cas = 5;
	}
	else if(resultat>=40){
		cas = 6;
	}

	return cas;
}

int main(int argc, char* argv[]){
	float poids=0.0, taille=0.0;
	int condition=0, reprise=1;
	printf("Ce programme calcule votre indice de masse corporelle et vous indique votre condition !\nEntrez votre poids: ");
	scanf("%f", &poids);
	do{
		printf("Entrez votre taille: ");
		scanf("%f", &taille);
		condition = IMC(poids, taille);
		switch(condition){
			case 1:
			printf("Maigre !");
			break;

			case 2:
			printf("Normal !");
			break;

			case 3:
			printf("Sur-Poids !");
			break;

			case 4:
			printf("Obésité modérée !");
			break;

			case 5:
			printf("Obésité sévère !");
			break;

			case 6:
			printf("Obésité morbide !");
			break;

			default:
			printf("Aucune correspondance !");
			break;
		}
		printf("Voulez-vous recommencer ?\n1- Oui\n2-Non\nEntrez 1 ou 2: ");
		scanf("%d", &reprise);
	}
	while(reprise==1);
	return 0;

}
