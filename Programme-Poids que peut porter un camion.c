#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int x, y;
	printf("Entrez le poids que peut transporter le camion en kilogramme: \n");
	scanf("%d", &x);
	printf("Entrez le poids d une marchandise en kilogramme: \n");
	scanf("%d", &y);

	printf("Le nombre de carton que peut transporter le camion est %d. \n", x/y);

	return 0;

}
